#pragma once

#include "ITransportBuilder.h"
#include "Storage_Types.h"

class BusBuilder final : public ITransportBuilder
{
public:
	BusBuilder();
	virtual ~BusBuilder() = default;
public:
	void BuildTransportType() override;
	void BuildMaxSeats() override;
};

