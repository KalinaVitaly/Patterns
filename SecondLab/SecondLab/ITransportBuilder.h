#pragma once

#include "Storage_Types.h"
#include "Transport.h"

class ITransportBuilder
{
public:
	ITransportBuilder();
	virtual ~ITransportBuilder() = default;
public:
	virtual void BuildTransportType() = 0;
	virtual void BuildMaxSeats() = 0;
	virtual void BuildChildSeats();
public:
	void CreateTransport();
	Transport* GetTransport();
protected:
	Transport* transport;
};

