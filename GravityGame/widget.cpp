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
}

Widget::~Widget()
{
    delete ui;   
    delete gameLogic;
}

void Widget::Init()
{
    ui->setupUi(this);
    scene->setSceneRect(0, 0, 500, 500);
    ui->graphicsView->setScene(scene);

    connect(ui->PauseButton, &QPushButton::clicked, gameLogic->GetTimer(), &QTimer::stop);
    connect(ui->ContinueButton, SIGNAL(clicked()), gameLogic->GetTimer(), SLOT(start()));
    connect(ui->DeleteButton, &QPushButton::clicked, this, &Widget::DeleteButtonClicked);
    connect(this, &Widget::SignalDeleteItems, gameLogic, &GameLogic::DeleteItems);
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
