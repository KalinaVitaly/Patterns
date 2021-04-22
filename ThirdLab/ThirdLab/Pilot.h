#pragma once
#include "People.h"
#include "storage.h"

class Pilot final : public People
{
public:
	Pilot();
	~Pilot() override = default;
};

