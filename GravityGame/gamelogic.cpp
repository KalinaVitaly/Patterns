#include "gamelogic.h"
#include <cmath>
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
    UpdateObjectsSpeeds();
    UpdateObjectsPositions();
};

void GameLogic::UpdateObjectsSpeeds()
{
    float distance;
    float deltaX;
    float deltaY;
    float vx;
    float vy;

    for (int i = 0; i < objects.size(); ++i)
    {
        for (int j = 0; j < objects.size(); ++j)
        {
            if (i == j)
            {
                continue;
            }
            deltaX = objects[i]->pos().x() - objects[j]->pos().x();
            deltaY = objects[i]->pos().y() - objects[j]->pos().y();
            distance = sqrt(deltaX * deltaX + deltaY * deltaY);

            vx = objects[j]->GetObjectMass() / distance / distance
                    * (objects[j]->pos().x() - objects[i]->pos().x()) / distance;
            vy = objects[j]->GetObjectMass() / distance / distance
                    * (objects[j]->pos().y() - objects[i]->pos().y()) / distance;

            objects[i]->AddSpeed(vx, vy);
        }
    }
}


void GameLogic::UpdateObjectsPositions()
{
    for(int i = 0; i < objects.size(); ++i)
    {
        QPointF point = objects[i]->pos();
        point.setX(point.x() + objects[i]->GetObjectXSpeed());
        point.setY(point.y() + objects[i]->GetObjectYSpeed());
        objects[i]->setPos(point);
        qDebug() << "Speed " << objects[i]->GetObjectXSpeed() << " " << objects[i]->GetObjectYSpeed();
    }
}

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
