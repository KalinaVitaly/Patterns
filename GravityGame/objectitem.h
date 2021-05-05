#ifndef OBJECTITEM_H
#define OBJECTITEM_H

#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QRandomGenerator>
#include <QGraphicsSceneMouseEvent>
#include <itemsettingsdialog.h>
#include "StorageVariable.h"

class ObjectItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit ObjectItem(QObject *parent = nullptr);
    virtual ~ObjectItem();
public:
    float GetObjectMass() const { return objectMass; };
    float GetObjectXSpeed() const { return xSpeed; };
    float GetObjectYSpeed() const { return ySpeed; };
    float GetObjectRadious() const { return objectRadious; };
public:
    void SetObjectMass(float _objectMass) { objectMass = _objectMass; };
    void SetObjectXSpeed(float _xSpeed) { xSpeed = _xSpeed; };
    void SetObjectYSpeed(float _ySpeed) { ySpeed = _ySpeed; };
    void SetObjectRadious(float _objectRadious) { objectRadious = _objectRadious; };
    void SetColor(QColor _color) { objectColor = _color; };
public:
    void AddSpeed(float _vx, float _vy);
protected:
    //void mousePressEvent(QGraphicsSceneMouseEvent *_event) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *_event) override;
protected slots:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QRectF boundingRect() const override;
    void SlotSetParametrs(ObjectParametrs);
private:
    void Init();
private:
    QColor objectColor;
    float objectMass;
    float xSpeed;
    float ySpeed;
    float objectRadious;
    ItemSettingsDialog *itemSettings;
signals:
    void SignalGamePause();
};

#endif // OBJECTITEM_H
