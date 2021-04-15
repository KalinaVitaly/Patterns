#pragma once

#include "Passenger.h"
#include "IPassengerBuilder.h"

class PassengerDirector final
{
public:
	PassengerDirector() = default;
public:
	Passenger* CreatePassegner(IPassengerBuilder&);
};

