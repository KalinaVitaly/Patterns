#pragma once
#include "People.h"
#include "storage.h"
#include <iostream>

class Pilot final : public People
{
public:
	Pilot();
	~Pilot() override = default;
	void ToString() override;
};

