#include "TransportDirector.h"

Transport* TransportDirector::CreateTransport(ITransportBuilder&  transportBuilder)
{
    transportBuilder.CreateTransport();
    transportBuilder.BuildTransportType();
    transportBuilder.BuildMaxSeats();
    transportBuilder.BuildChildSeats();

    return transportBuilder.GetTransport();
}
