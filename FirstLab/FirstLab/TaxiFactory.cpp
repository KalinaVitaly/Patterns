#include "TaxiFactory.h"

TaxiDriver* TaxiFactory::createDriver()
{
	return new TaxiDriver;
}

TaxiTransport* TaxiFactory::createTransport()
{
	return new TaxiTransport;
}

PassengerTaxi* TaxiFactory::createPassenger()
{
	return new PassengerTaxi;
}
