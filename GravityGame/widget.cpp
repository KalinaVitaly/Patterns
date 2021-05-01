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
{
    ui->setupUi(this);
    scene->setSceneRect(0, 0, 500, 500);
    //ObjectItem *obj1 = new ObjectItem;
//    obj->SetColor(QColor(generator.generate() % 255, generator.generate() % 255, generator.generate() % 255));
//    obj1->SetColor(QColor(generator.generate() % 255, generator.generate() % 255, generator.generate() % 255));
    //scene->addItem(obj1);
    ui->graphicsView->setScene(scene);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::CreatePlanetClicked()
{
    qDebug() << "Create planet clicked";
    obj = director->CreatePlanet(*builder);
    obj->setPos(40, 40);
    scene->addItem(obj);
    obj->setFlag(QGraphicsItem::ItemIsMovable);
}

