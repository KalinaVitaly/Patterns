#pragma once

#include "IFactory.h"
#include "TaxiDriver.h"
#include "TaxiTransport.h"
#include "PassengerTaxi.h"

class TaxiFactory : public IFactory
{
public:
	TaxiDriver* createDriver() override;
	TaxiTransport* createTransport() override;
	PassengerTaxi* createPassenger() override;
};

