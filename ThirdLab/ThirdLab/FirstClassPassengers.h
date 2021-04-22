#pragma once
#include "People.h"
#include "storage.h"

class FirstClassPassengers final : public People
{
public:
	FirstClassPassengers();
	~FirstClassPassengers() override = default;
};

