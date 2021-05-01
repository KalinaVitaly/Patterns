#ifndef OBJECTITEM_H
#define OBJECTITEM_H

#include <QGraphicsItem>
#include <QObject>
#include <QPainter>

class ObjectItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit ObjectItem(QObject *parent = nullptr);
    virtual ~ObjectItem() = default;
public:
//    int GetObjectMass() const;
//    int GetObjectXSpeed() const;
//    int GetObjectYSpeed() const;
//    int GetObjectRadious() const;
public:
    void SetObjectMass(int _objectMass) { objectMass = _objectMass; };
    void SetObjectXSpeed(int _xSpeed) { xSpeed = _xSpeed; };
    void SetObjectYSpeed(int _ySpeed) { ySpeed = _ySpeed; };
    void SetObjectRadious(int _objectRadious) { objectRadious = _objectRadious; };
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
