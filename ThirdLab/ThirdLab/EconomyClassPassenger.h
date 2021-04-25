#pragma once
#include "People.h"
#include "storage.h"
#include <iostream>

class EconomyClassPassenger final : public People
{
public:
	EconomyClassPassenger();
	~EconomyClassPassenger() override = default;
	void ToString() override;
};

