#include "widget.h"
#include "ui_widget.h"
#include "planetbuilder.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , scene(new QGraphicsScene)
    , director(new ObjectDirector)
    , builder(new PlanetBuilder)
    , gameLogic(new GameLogic)
{
    ui->setupUi(this);
    scene->setSceneRect(0, 0, 500, 500);
    ui->graphicsView->setScene(scene);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::CreatePlanetClicked()
{
    qDebug() << "Create planet clicked";
    obj = gameLogic->AddItem();
    //obj->setPos();
    scene->addItem(obj);
    obj->setFlag(QGraphicsItem::ItemIsMovable);
}

