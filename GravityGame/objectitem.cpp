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
    return QRectF(0,0,100,100);
}

void ObjectItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *_event)
{
    Q_UNUSED(_event)
    itemSettings = new ItemSettingsDialog(objectMass, objectRadious, xSpeed, ySpeed);
    connect(itemSettings, &ItemSettingsDialog::SignalSetObjectParametrs, this, &ObjectItem::SlotSetParametrs);
    emit SignalGamePause();
    itemSettings->show();
    itemSettings->setAttribute(Qt::WA_DeleteOnClose);
}

void ObjectItem::SlotSetParametrs(ObjectParametrs _objectParametrs)
{
    objectMass = _objectParametrs.mass;
    xSpeed = _objectParametrs.xSpeed;
    ySpeed = _objectParametrs.ySpeed;
    objectRadious = _objectParametrs.radious;

    emit SignalGameContinue();
}

ObjectItem::~ObjectItem()
{}

