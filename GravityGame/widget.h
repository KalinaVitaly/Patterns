#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
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
private:
    void Init();
private:
    Ui::Widget *ui;
    ObjectItem *obj;
    QGraphicsScene *scene;
    ObjectDirector *director;
    PlanetBuilder *builder;
    GameLogic *gameLogic;
signals:
    void SignalPauseClicked();
};
#endif // WIDGET_H
