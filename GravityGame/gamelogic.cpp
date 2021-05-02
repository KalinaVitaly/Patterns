#include "gamelogic.h"
#include <QDebug>

GameLogic::GameLogic(QObject *parent)
    : QObject(parent)
{
    Init();
}

void GameLogic::Init()
{
    planetBuilder = new PlanetBuilder;
    timer = new QTimer;
    connect(timer, &QTimer::timeout, this, &GameLogic::Update);
    timer->start(100);
}

void GameLogic::Update()
{
    qDebug() << "Update";
    for(int i = 0; i < objects.size(); ++i)
    {
        QPointF point = objects[i]->pos();
        point.setX(point.x() + objects[i]->GetObjectXSpeed());
        point.setY(point.y() + objects[i]->GetObjectYSpeed());
        objects[i]->setPos(point);
    }
};

ObjectItem* GameLogic::AddItem()
{
    ObjectItem *object = director->CreatePlanet(*planetBuilder);
    objects.append(object);
    return object;
}

GameLogic::~GameLogic()
{
    DeleteItems();
};

void GameLogic::DeleteItems()
{
    for(int i = 0; i < objects.size(); ++i)
    {
        delete objects[i];
    }
}
