#include "BusDriverBuilder.h"

BusDriverBuilder::BusDriverBuilder() : IDriverBuilder()
{
}

void BusDriverBuilder::BuildDriverLisence()
{
	driver->SetDriverLisence(DriverLisence::Bus);
}
