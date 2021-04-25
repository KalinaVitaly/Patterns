#pragma once
#include "Composite.h"
#include <iostream>

class AirplaneComposite final : public Composite
{
public:
	AirplaneComposite() = default;
	~AirplaneComposite() override = default;
	void ToString() override;
};

