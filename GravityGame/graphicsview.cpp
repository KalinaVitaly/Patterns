#include "graphicsview.h"
#include <QDebug>

GraphicsView::GraphicsView(QWidget *parent)
    : QGraphicsView(parent)
{

}

void GraphicsView::mousePressEvent(QMouseEvent *_event)
{
    emit SignalPress(_event->pos());
}

void GraphicsView::mouseReleaseEvent(QMouseEvent *_event)
{
    Q_UNUSED(_event)
    emit SignalRelease();
}
