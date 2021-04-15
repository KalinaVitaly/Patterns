#include "PassengerDirector.h"

Passenger* PassengerDirector::CreatePassegner(IPassengerBuilder& _passengerBuilder)
{
    _passengerBuilder.CreatePassenger();
    _passengerBuilder.BuildPassengerTransportType();
    _passengerBuilder.BuildPassengerCategoty();

    return _passengerBuilder.GetPassenger();
}
