#pragma once
#include "IDriverBuilder.h"
class TaxiDriverBuilder final : public IDriverBuilder
{
public:
	TaxiDriverBuilder();
	virtual ~TaxiDriverBuilder() = default;
public:
	void BuildDriverLisence() override;
};

