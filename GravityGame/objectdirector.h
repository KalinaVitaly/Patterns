#ifndef OBJECTDIRECTOR_H
#define OBJECTDIRECTOR_H

#include "planetbuilder.h"
#include "heavypointbuilder.h"
#include "objectitem.h"

class ObjectDirector final
{
public:
    explicit ObjectDirector();
public:
    ObjectItem* CreatePlanet(PlanetBuilder &builder);
    ObjectItem* CreateHeavyPoint(HeavyPointBuilder &builder, const QPointF& _point);
};

#endif // OBJECTDIRECTOR_H
