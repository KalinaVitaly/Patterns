#include "TaxiDriverBuilder.h"

TaxiDriverBuilder::TaxiDriverBuilder() : IDriverBuilder()
{
}

void TaxiDriverBuilder::BuildDriverLisence()
{
	driver->SetDriverLisence(DriverLisence::Taxi);
}
