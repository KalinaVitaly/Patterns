#include "IPassengerBuilder.h"

IPassengerBuilder::IPassengerBuilder() : passenger(nullptr)
{
}

Passenger* IPassengerBuilder::GetPassenger()
{
    return passenger;
}

void IPassengerBuilder::CreatePassenger()
{
    passenger = new Passenger;
}
