#include "BusFactory.h"

BusDriver* BusFactory::createDriver()
{
	return new BusDriver;
}

BusTransport* BusFactory::createTransport()
{
	return new BusTransport;
}

PassengerBus* BusFactory::createPassenger()
{
	return new PassengerBus;
}
