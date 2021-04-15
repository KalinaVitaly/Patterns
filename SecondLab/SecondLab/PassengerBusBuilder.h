#pragma once

#include "IPassengerBuilder.h"
#include "Storage_Types.h"

class PassengerBusBuilder final : public IPassengerBuilder
{
public:
	PassengerBusBuilder();
	virtual ~PassengerBusBuilder() = default;
public:
	void BuildPassengerCategoty() override;
	void BuildPassengerTransportType() override;
};

