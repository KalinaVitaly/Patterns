#pragma once

#include <string>
class Driver
{
public:
	explicit Driver(std::string _category);
	virtual ~Driver();

private:
	std::string category;
};

