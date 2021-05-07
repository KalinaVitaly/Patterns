#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsScene>
#include <QMouseEvent>
#include "itemsettingsdialog.h"
#include "StorageVariable.h"
#include "objectitem.h"
#include "objectdirector.h"
#include "planetbuilder.h"
#include "gamelogic.h"
#include "scene.h"
#include "StorageVariable.h"

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
    void CreateItemSettingsDialog(ObjectParametrs);
private:
    void Init();
private:
    Ui::Widget *ui;
    ObjectItem *obj;
    //QGraphicsScene *scene;
    Scene *scene;
    GameLogic *gameLogic;
    ItemSettingsDialog *itemSettingsDialog;
signals:
    void SignalPauseClicked();
    void SignalDeleteItems();
};
#endif // WIDGET_H
