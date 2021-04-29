#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->InterpretateButton, &QPushButton::clicked,
            this, &Widget::InterpretateClicked);
    changeQuote = new ChangeQuote;
    removeMultiplyEnter = new RemoveMultiplyEnter;
    removeMultiplySpaces = new RemoveMultiplySpaces;
    removeMultiplyBrackets = new RemoveSpaceInBrackets;
}

Widget::~Widget()
{
    delete ui;
    delete changeQuote;
    delete removeMultiplyEnter;
    delete removeMultiplySpaces;
    delete removeMultiplyBrackets;
}

void Widget::InterpretateClicked()
{
    QString text = ui->TextEdit->toPlainText();
    changeQuote->Interpret(text);
    removeMultiplyBrackets->Interpret(text);
    removeMultiplyEnter->Interpret(text);
    removeMultiplySpaces->Interpret(text);
    ui->TextEdit->setText(text);
}

