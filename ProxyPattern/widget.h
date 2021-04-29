#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;

private:
    Ui::Widget *ui;

signals:
    void SignalMouseDoubleClicked();
};
#endif // WIDGET_H
