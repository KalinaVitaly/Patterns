#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include "StorageVariable.h"
#include "objectitem.h"
#include "objectdirector.h"
#include "planetbuilder.h"
#include "gamelogic.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void CreatePlanetClicked();
    void DeleteButtonClicked();
private:
    void Init();
private:
    Ui::Widget *ui;
    ObjectItem *obj;
    QGraphicsScene *scene;
    GameLogic *gameLogic;
signals:
    void SignalPauseClicked();
    void SignalDeleteItems();
};
#endif // WIDGET_H
