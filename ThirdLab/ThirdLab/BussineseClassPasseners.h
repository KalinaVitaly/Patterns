#pragma once
#include "People.h"
#include "storage.h"
#include <iostream>

class BussineseClassPasseners final : public People
{
public:
	BussineseClassPasseners();
	~BussineseClassPasseners() override = default;
	void ToString() override;
};

