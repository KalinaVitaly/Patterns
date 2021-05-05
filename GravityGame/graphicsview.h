#ifndef GRAPHICSVIEW_H
#define GRAPHICSVIEW_H

#include <QGraphicsView>
#include <QWidget>
#include <QMouseEvent>

class GraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit GraphicsView(QWidget *parent = nullptr);
    ~GraphicsView() = default;
protected:
    void mousePressEvent(QMouseEvent *_event) override;
    void mouseReleaseEvent(QMouseEvent *_event) override;
signals:
    void SignalPress(QPoint);
    void SignalRelease();
};

#endif // GRAPHICSVIEW_H
