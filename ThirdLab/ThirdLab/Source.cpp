#include <iostream>
#include <memory>
#include "AirplaneComposite.h"
#include "FirstClassComposite.h"
#include "EconomyClassComposite.h"
#include "BussineseClassComposite.h"
#include "Pilot.h"
#include "Stewardessa.h"
#include "EconomyClassPassenger.h"
#include "BussineseClassPasseners.h"
#include "FirstClassPassengers.h"
#include "storage.h"

int main()
{
	std::shared_ptr<AirplaneComposite> pAirplane(new AirplaneComposite);
	FirstClassComposite* pFirstClass = new FirstClassComposite;
	EconomyClassComposite* pEconomyClass = new EconomyClassComposite;
	BussineseClassComposite* pBussineseClass = new BussineseClassComposite;

	pAirplane->AddComponent(pFirstClass);
	pAirplane->AddComponent(pEconomyClass);
	pAirplane->AddComponent(pBussineseClass);

	std::cout << "We has " << storage::PassangersCountType::PilotType << " on board\n";
	for (size_t i = 0; i < storage::PassangersCountType::PilotType; ++i)
	{
		pAirplane->AddComponent(new Pilot);
	}

	std::cout << "We has " << storage::PassangersCountType::PilotType << " on board\n";
	for (size_t i = 0; i < storage::PassangersCountType::Stewardessa; ++i)
	{
		pAirplane->AddComponent(new Stewardessa);
	}

	std::cout << "We has " << storage::PassangersCountType::PassengersEconomyClass << " on board\n";
	for (size_t i = 0; i < storage::PassangersCountType::PassengersEconomyClass; ++i)
	{
		pEconomyClass->AddComponent(new EconomyClassPassenger);
	}

	std::cout << "We has " << storage::PassangersCountType::PassengersFirstClass << " on board\n";
	for (size_t i = 0; i < storage::PassangersCountType::PassengersFirstClass; ++i)
	{
		pFirstClass->AddComponent(new FirstClassPassengers);
	}

	std::cout << "We has " << storage::PassangersCountType::PassengersBussinesClass << " on board\n";
	for (size_t i = 0; i < storage::PassangersCountType::PassengersBussinesClass; ++i)
	{
		pBussineseClass->AddComponent(new BussineseClassPasseners);
	}


	pAirplane->OutputInformation();

	std::cout << "Total weight: " << pAirplane->GetTotalWeight() << std::endl;

	return 0;
}