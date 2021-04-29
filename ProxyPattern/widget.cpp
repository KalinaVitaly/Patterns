#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this, &Widget::SignalMouseDoubleClicked,
            ui->graphicsView, &GraphicsView::SlotMouseDoubleClicked);
    connect(ui->drawRectangleButton, &QPushButton::clicked,
            ui->graphicsView, &GraphicsView::SlotDrawRectangleClicked);
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::RightButton)
    {
        emit SignalMouseDoubleClicked();
    }
}


Widget::~Widget()
{
    delete ui;
}

