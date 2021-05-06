#include "widget.h"
#include "ui_widget.h"
#include "planetbuilder.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , scene(new QGraphicsScene)
    , gameLogic(new GameLogic)
{
    Init();
    ui->graphicsView->viewport()->installEventFilter(this);
}

Widget::~Widget()
{
    delete ui;   
    delete gameLogic;
}

void Widget::Init()
{
    ui->setupUi(this);
    setFixedSize(900, 850);
    scene->setSceneRect(0, 0, cSceneWidth, cSceneHeight);
    ui->graphicsView->setScene(scene);

    connect(ui->PauseButton, &QPushButton::clicked, gameLogic->GetTimer(), &QTimer::stop);
    connect(ui->ContinueButton, SIGNAL(clicked()), gameLogic->GetTimer(), SLOT(start()));
    connect(ui->DeleteButton, &QPushButton::clicked, this, &Widget::DeleteButtonClicked);
    connect(this, &Widget::SignalDeleteItems, gameLogic, &GameLogic::DeleteItems);

    connect(this, &Widget::SignalPress, gameLogic, &GameLogic::SlotAddHeavyItem);
    connect(this, &Widget::SignalRelease, gameLogic, &GameLogic::SlotDeleteHeavyItem);
    //ui->graphicsView->installEventFilter()
}

void Widget::DeleteButtonClicked()
{
    emit SignalDeleteItems();
    scene->clear();
}

void Widget::CreatePlanetClicked()
{
    obj = gameLogic->AddItem();
    scene->addItem(obj);
    obj->setFlag(QGraphicsItem::ItemIsMovable);
}

bool Widget::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *keyEvent = static_cast<QMouseEvent*>(event);
        emit SignalPress(keyEvent->pos());
        qDebug() << "MousePressEvent";
        return true;
    }
    else if (event->type() == QEvent::MouseButtonRelease)
    {
        qDebug() << "MouseReleaseEvent";
        emit SignalRelease();
        return true;
    }
    return false;
}
