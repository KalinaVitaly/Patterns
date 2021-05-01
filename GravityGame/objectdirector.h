#ifndef OBJECTDIRECTOR_H
#define OBJECTDIRECTOR_H

#include "planetbuilder.h"
#include "objectitem.h"

class ObjectDirector final
{
public:
    explicit ObjectDirector();
public:
    ObjectItem* CreatePlanet(PlanetBuilder &builder);
};

#endif // OBJECTDIRECTOR_H
