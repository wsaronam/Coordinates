#include <iostream>
#include <string>

#include "master.hpp"
#include "math.hpp"
#include "output.hpp"

// Contains the functions needed to obtain user input.


int MasterProgram(void)
{
	double CoordinateOne; std::string LatDirection; 
	double CoordinateTwo; std::string LonDirection; 
	std::string LocationName;

	int NumOfLocations;


	double ClosestCoordinateOne; std::string ClosestLatDirection; 
	double ClosestCoordinateTwo; std::string ClosestLonDirection; 
	std::string ClosestLocationName;

	double FarthestCoordinateOne; std::string FarthestLatDirection; 
	double FarthestCoordinateTwo; std::string FarthestLonDirection; 
	std::string FarthestLocationName;

	double ClosestDistance = 99999999999999;
	double FarthestDistance = 0;

	
	std::cin >> CoordinateOne >> LatDirection >> CoordinateTwo >> LonDirection;
	std::getline(std::cin, LocationName);
	LocationName.erase(0, 1);
	std::cin >> NumOfLocations;

	for (int counter = 0; counter < NumOfLocations; counter++)
	{
		double CurrentCoordinateOne; std::string CurrentLatDirection; 
		double CurrentCoordinateTwo; std::string CurrentLonDirection; 
		std::string CurrentLocationName;

		std::cin >> CurrentCoordinateOne >> CurrentLatDirection >> CurrentCoordinateTwo >> CurrentLonDirection;
		std::getline(std::cin, CurrentLocationName);
		CurrentLocationName.erase(0, 1);

		double distance = CalculateDistance(CoordinateOne, CurrentCoordinateOne, CoordinateTwo, CurrentCoordinateTwo, LatDirection, CurrentLatDirection, LonDirection, CurrentLonDirection);

		if (distance < ClosestDistance)
		{
			ClosestDistance = distance;

			ClosestCoordinateOne = CurrentCoordinateOne; ClosestCoordinateTwo = CurrentCoordinateTwo;
			ClosestLatDirection = CurrentLatDirection; ClosestLonDirection = CurrentLonDirection;
			ClosestLocationName = CurrentLocationName;
		}

		if (distance > FarthestDistance)
		{
			FarthestDistance = distance;

			FarthestCoordinateOne = CurrentCoordinateOne; FarthestCoordinateTwo = CurrentCoordinateTwo;
			FarthestLatDirection = CurrentLatDirection; FarthestLonDirection = CurrentLonDirection;
			FarthestLocationName = CurrentLocationName;
		}

	}

	ReturnStartLocation(CoordinateOne, LatDirection, CoordinateTwo, LonDirection, LocationName);
	ReturnClosestLocation(ClosestCoordinateOne, ClosestLatDirection, ClosestCoordinateTwo, ClosestLonDirection, ClosestLocationName, ClosestDistance);
	ReturnFarthestLocation(FarthestCoordinateOne, FarthestLatDirection, FarthestCoordinateTwo, FarthestLonDirection, FarthestLocationName, FarthestDistance);

	return 0;
}
