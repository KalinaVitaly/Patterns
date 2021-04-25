#pragma once
#include "People.h"
#include "storage.h"
#include <iostream>

class FirstClassPassengers final : public People
{
public:
	FirstClassPassengers();
	~FirstClassPassengers() override = default;
	void ToString() override;
};

