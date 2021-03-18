#pragma once

#include "IFactory.h"
#include "BusDriver.h"
#include "BusTransport.h"
#include "PassengerBus.h"

class BusFactory : public IFactory
{
public:
	BusDriver* createDriver() override;
	BusTransport* createTransport() override;
	PassengerBus* createPassenger() override;
};

