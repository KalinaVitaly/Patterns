#include "objectitem.h"

ObjectItem::ObjectItem(QObject *parent)
    : QObject(parent),
      QGraphicsItem()
{
    Init();
}

void ObjectItem::Init()
{
    objectMass = 10;
    xSpeed = 0;
    ySpeed = 0;
    objectRadious = 15;
}

void ObjectItem::AddSpeed(float _vx, float _vy)
{
    xSpeed += _vx;
    ySpeed += _vy;
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

