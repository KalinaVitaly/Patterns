#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "changequote.h"
#include "removemultiplyenter.h"
#include "removemultiplyspaces.h"
#include "removespaceinbrackets.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    ChangeQuote *changeQuote;
    RemoveMultiplyEnter *removeMultiplyEnter;
    RemoveMultiplySpaces *removeMultiplySpaces;
    RemoveSpaceInBrackets *removeMultiplyBrackets;
private slots:
    void InterpretateClicked();
};
#endif // WIDGET_H
