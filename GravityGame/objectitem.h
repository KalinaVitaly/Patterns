#ifndef OBJECTITEM_H
#define OBJECTITEM_H

#include <QGraphicsItem>
#include <QObject>
#include <QPainter>
#include <QRandomGenerator>

class ObjectItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit ObjectItem(QObject *parent = nullptr);
    virtual ~ObjectItem() = default;
public:
    int GetObjectMass() const { return objectMass; };
    int GetObjectXSpeed() const { return xSpeed; };
    int GetObjectYSpeed() const { return ySpeed; };
    int GetObjectRadious() const { return objectRadious; };
public:
    void SetObjectMass(int _objectMass) { objectMass = _objectMass; };
    void SetObjectXSpeed(int _xSpeed) { xSpeed = _xSpeed; };
    void SetObjectYSpeed(int _ySpeed) { ySpeed = _ySpeed; };
    void SetObjectRadious(int _objectRadious) { objectRadious = _objectRadious; };
    void SetColor(QColor _color) { objectColor = _color; };
protected slots:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    QRectF boundingRect() const override;
private:
    void Init();
private:
    QColor objectColor;
    int objectMass;
    int xSpeed;
    int ySpeed;
    int objectRadious;
};

#endif // OBJECTITEM_H
