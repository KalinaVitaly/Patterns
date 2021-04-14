#pragma once

#include "IPassengerBuilder.h"
#include "Storage_Types.h"

class BusPassengerBuilder : public IPassengerBuilder
{
public:
	BusPassengerBuilder();
public:
	void BuildPassengerCategoty() override;
	void BuildPassengerTransportCategory() override;
private:

};

