#pragma once

#include "Passenger.h"

class IPassengerBuilder
{
public:
	IPassengerBuilder();
public:
	virtual void BuildPassengerCategoty() = 0;
	virtual void BuildPassengerTransportCategory() = 0;
public:
	Passenger* GetPassenger();
	void CreatePassenger();
protected:
	Passenger* passenger;
};

