#pragma once

#include "IDriverBuilder.h"
#include "Storage_Types.h"

class BusDriverBuilder final : public IDriverBuilder
{
public:
	BusDriverBuilder();
	virtual ~BusDriverBuilder() = default;
public:
	void BuildDriverLisence() override;
};

