#pragma once

#include "Driver.h"
#include "IDriverBuilder.h"

class DriverDirector final
{
public:
	DriverDirector() = default;
public:
	Driver* CreateDriver(IDriverBuilder&);
};

