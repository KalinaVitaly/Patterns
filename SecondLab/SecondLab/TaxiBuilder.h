#pragma once
#include "ITransportBuilder.h"
class TaxiBuilder final : public ITransportBuilder
{
public:
	TaxiBuilder();
	virtual ~TaxiBuilder() = default;
public:
	void BuildTransportType() override;
	void BuildMaxSeats() override;
	void BuildChildSeats() override;
};

