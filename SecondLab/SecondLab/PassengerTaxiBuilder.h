#pragma once
#include "IPassengerBuilder.h"
#include <stdlib.h>

class PassengerTaxiBuilder final : public IPassengerBuilder
{
public:
	PassengerTaxiBuilder();
	virtual ~PassengerTaxiBuilder() = default;
public:
	void BuildPassengerCategoty() override;
	void BuildPassengerTransportType() override;
};

