#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include "proxyimage.h"

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    GraphicsView(QWidget *parent = nullptr);

public slots:
    void SlotMouseDoubleClicked();
    void SlotDrawRectangleClicked();
private:
    void Init();
private:
    QGraphicsItemGroup *itemsGroup;
    QGraphicsScene *scene;
    QGraphicsRectItem *rectangle;
    ProxyImage *image;
};

#endif // GRAPHICSVIEW_H
