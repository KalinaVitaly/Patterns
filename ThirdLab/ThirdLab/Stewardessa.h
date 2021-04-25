#pragma once
#include "People.h"
#include "storage.h"
#include <iostream>

class Stewardessa final : public People
{
public:
	Stewardessa();
	~Stewardessa() override = default;
	void ToString() override;
};

