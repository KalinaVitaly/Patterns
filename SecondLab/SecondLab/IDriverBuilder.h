#pragma once

#include "Driver.h"
#include "Storage_Types.h"

class IDriverBuilder
{
public:
	IDriverBuilder();
	virtual ~IDriverBuilder() = default;
public:
	virtual void BuildDriverLisence() = 0;
public:
	void CreateDriver();
	Driver* GetDriver();
protected:
	Driver* driver;
};

