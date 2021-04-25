#pragma once

namespace storage
{
	const size_t maxBaggageFirstClass = -1;
	const size_t maxBaggageEconomyClass = 20;
	const size_t maxBaggageBussinesClass = 35;
	const size_t maxBaggageForWorkers = 0;

	enum PassangersCountType
	{
		PilotType = 2,
		Stewardessa = 6,
		PassengersFirstClass = 10,
		PassengersBussinesClass = 20,
		PassengersEconomyClass = 150
	};

	enum class PassangersType
	{
		Pilot,
		Stewardessa,
		PassengersFirstClass,
		PassengersBussinesClass,
		PassengersEconomyClass
	};

	enum class CompositeTypes
	{
		EconomyClass,
		FirstClass,
		BussineseClass,
		Airplane
	};
}
