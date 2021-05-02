#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <QObject>
#include <QList>
#include <QTimer>
#include "objectitem.h"
#include "objectdirector.h"
#include "planetbuilder.h"

class GameLogic final : public QObject
{
    Q_OBJECT
public:
    explicit GameLogic(QObject *parent = nullptr);
    ~GameLogic();
public:
    void Update();
    void DeleteItems();
    ObjectItem* AddItem();
private:
    void Init();
private:
    void UpdateObjectsPositions();
    void UpdateObjectsSpeeds();
private:
    QList<ObjectItem *> objects;
    ObjectDirector *director;
    PlanetBuilder *planetBuilder;
    QTimer *timer;
};

#endif // GAMELOGIC_H
