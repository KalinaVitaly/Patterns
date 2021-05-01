#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , obj(new ObjectItem)
    , scene(new QGraphicsScene)
{
    ui->setupUi(this);
    scene->setSceneRect(0, 0, 500, 500);
    scene->addItem(obj);
    ObjectItem *obj1 = new ObjectItem;
    scene->addItem(obj1);
    obj->setFlag(QGraphicsItem::ItemIsMovable);
    ui->graphicsView->setScene(scene);
}

Widget::~Widget()
{
    delete ui;
}

