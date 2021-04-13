#pragma once

#include "Storage_Types.h"

class Driver final
{
public:
	Driver();
public:
	void SetDriverLisence(DriverLisence);
private:
	DriverLisence driverLisence;
};

