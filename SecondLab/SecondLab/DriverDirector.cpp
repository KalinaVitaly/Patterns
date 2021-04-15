#include "DriverDirector.h"

Driver* DriverDirector::CreateDriver(IDriverBuilder& _driverBuilder)
{
    _driverBuilder.CreateDriver();
    _driverBuilder.BuildDriverLisence();

    return _driverBuilder.GetDriver();
}
