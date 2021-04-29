#include "graphicsview.h"

GraphicsView::GraphicsView(QWidget *parent)
    : QGraphicsView(parent),
      itemsGroup(new QGraphicsItemGroup),
      scene(new QGraphicsScene(this)),
      rectangle(new QGraphicsRectItem(15, 15, 152, 152)),
      image(new ProxyImage)
{
    Init();
}

void GraphicsView::Init()
{
    scene->setSceneRect(0, 0, 500, 500);
    setScene(scene);
    scene->addItem(itemsGroup);
    itemsGroup->setFlag(QGraphicsItem::ItemIsMovable);
}

void GraphicsView::SlotDrawRectangleClicked()
{
    QPen pen(Qt::blue);
    rectangle->setPen(pen);
    itemsGroup->addToGroup(rectangle);
}

void GraphicsView::SlotMouseDoubleClicked()
{
    image->DownloadImage();
    image->setPos(itemsGroup->pos().x() + 17, itemsGroup->pos().y() + 17);
    itemsGroup->addToGroup(image);
}
