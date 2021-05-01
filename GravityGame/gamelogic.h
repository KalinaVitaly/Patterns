#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <QObject>
#include <QList>
#include "objectitem.h"
#include "objectdirector.h"

class GameLogic final : public QObject
{
    Q_OBJECT
public:
    explicit GameLogic(QObject *parent = nullptr);
    ~GameLogic() {/*написать*/};
public:
    void Update() {/*написать*/};
    void AddItem(ObjectItem *_item) { objects.append(_item);/*должен возвращать item для scene*/ };
    void DeleteItems() {/*написать*/}

private:
    QList<ObjectItem *> objects;
    ObjectDirector *director;
};

#endif // GAMELOGIC_H
