#include <iostream>
#include <string>

#include "output.hpp"

// Contains the functions needed to return output to the user.



void ReturnStartLocation(double CoordinateOne, std::string LatDirection, double CoordinateTwo, std::string LonDirection, std::string LocationName)
{
	std::cout << "Start Location: " << CoordinateOne << LatDirection << " " << CoordinateTwo << LonDirection << " (" << LocationName << ")" << std::endl;
}


void ReturnClosestLocation(double CoordinateOne, std::string LatDirection, double CoordinateTwo, std::string LonDirection, std::string LocationName, double Distance)
{
	std::cout << "Closest Location: " << CoordinateOne << LatDirection << " " << CoordinateTwo << LonDirection << " (" << LocationName << ") " << "(" << Distance << " miles)" << std::endl;
}


void ReturnFarthestLocation(double CoordinateOne, std::string LatDirection, double CoordinateTwo, std::string LonDirection, std::string LocationName, double Distance)
{
	std::cout << "Farthest Location: " << CoordinateOne << LatDirection << " " << CoordinateTwo << LonDirection << " (" << LocationName << ") " << "(" << Distance << " miles)" << std::endl;
}