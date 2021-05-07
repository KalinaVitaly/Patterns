#include "objectitem.h"
#include <QDebug>

ObjectItem::ObjectItem(QObject *parent)
    : QObject(parent),
      QGraphicsItem()
{
    Init();
}

void ObjectItem::Init()
{}

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
    int boundingSize = 2 * objectRadious;
    return QRectF(0,0, boundingSize, boundingSize);
}

ObjectItem::~ObjectItem()
{}

