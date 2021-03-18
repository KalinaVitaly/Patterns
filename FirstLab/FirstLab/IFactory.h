#pragma once

#include "Driver.h"
#include "Transport.h"
#include "Passenger.h"

class IFactory
{
public:

	virtual Driver* createDriver() = 0;
	virtual Transport* createTransport() = 0;
	virtual Passenger* createPassenger() = 0;
};

