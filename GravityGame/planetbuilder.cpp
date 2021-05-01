#include "planetbuilder.h"

PlanetBuilder::PlanetBuilder()
{

}

void PlanetBuilder::BuildStartSpeed()
{
    item->SetObjectXSpeed(generator.generate() % 20);
    item->SetObjectYSpeed(generator.generate() % 20);
}

void PlanetBuilder::BuildStartMass()
{
    item->SetObjectMass(generator.generate() % 1000 + 1000);
}

void PlanetBuilder::BuildStartColor()
{
    item->SetColor(QColor(generator.generate() % 256,
                          generator.generate() % 256,
                          generator.generate() % 256));
}

void PlanetBuilder::BuildStartRadious()
{
    item->SetObjectRadious(generator.generate() % 20 + 10);
}

void PlanetBuilder::CreateObject()
{
    if (item == nullptr)
        item = new ObjectItem;
}
