#include "IDriverBuilder.h"

IDriverBuilder::IDriverBuilder() : driver(nullptr)
{
}

void IDriverBuilder::CreateDriver()
{
	driver = new Driver();
}

Driver* IDriverBuilder::GetDriver()
{
	return driver;
}
