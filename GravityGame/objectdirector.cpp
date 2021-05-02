#include "objectdirector.h"

ObjectDirector::ObjectDirector()
{}

ObjectItem* ObjectDirector::CreatePlanet(PlanetBuilder &builder)
{
    builder.CreateObject();
    builder.BuildStartColor();
    builder.BuildStartMass();
    builder.BuildStartRadious();
    builder.BuildStartSpeed();
    builder.BuildStartPosition();

    return builder.GetObject();
}
