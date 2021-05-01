#include "objectitem.h"

ObjectItem::ObjectItem(QObject *parent)
    : QObject(parent),
      QGraphicsItem()
{
    Init();
}

void ObjectItem::Init()
{
    objectColor.fromRgb(rand() % 255, rand() % 255, rand() % 255);
    objectMass = 10;
    xSpeed = 0;
    ySpeed = 0;
    objectRadious = 1;
}

void ObjectItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(objectColor));
    painter->drawEllipse(QRectF(0, 0, objectRadious * 2, objectRadious * 2));
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

QRectF ObjectItem::boundingRect() const
{
    return QRectF(0,0,100,100);
}

