#pragma once

#include "Transport.h"
#include "ITransportBuilder.h"

class TransportDirector final
{
public:
	TransportDirector() = default;
	Transport* CreateTransport(ITransportBuilder&);
};

