#include <cmath>
#include <string>
#include <iostream>

#include "math.hpp"


// Contains the functions needed to compute mathematical necessities.


double CalculateLatDifference(double Lat1, std::string Lat1D, double Lat2, std::string Lat2D)
{
	double LatDifference;

	if (Lat1D == Lat2D)
	{
		LatDifference = Lat1 - Lat2;
	}

	else
	{
		LatDifference = Lat1 + Lat2;
		if (LatDifference > 90) {LatDifference = 180 - LatDifference;}
	}

	return LatDifference;
}


double CalculateLonDifference(double Lon1, std::string Lon1D, double Lon2, std::string Lon2D)
{
	double LonDifference;

	if (Lon1D == Lon2D)
	{
		LonDifference = Lon1 - Lon2;
	}

	else
	{
		LonDifference = Lon1 + Lon2;
		if (LonDifference > 180) {LonDifference = 360 - LonDifference;}
	}

	return LonDifference;
}


double ConvertToRadians(double number)
{
	double radianform;

	radianform = number * (M_PI / 180);

	return radianform;
}




double CalculateDistance(double lat1, double lat2, double lon1, double lon2, std::string lat1D, std::string lat2D, std::string lon1D, std::string lon2D)
{
	double R = 3959.9;

	double dlat = CalculateLatDifference(lat1, lat1D, lat2, lat2D);
	double dlon = CalculateLonDifference(lon1, lon1D, lon2, lon2D);

	lat1 = ConvertToRadians(lat1); lat2 = ConvertToRadians(lat2); 
	lon1 = ConvertToRadians(lon1); lon2 = ConvertToRadians(lon2);
	dlat = ConvertToRadians(dlat); dlon = ConvertToRadians(dlon);


	double a = std::pow(std::sin(dlat/2), 2) + std::cos(lat1) * std::cos(lat2) * std::pow(std::sin(dlon/2), 2);
	double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1-a));
	double d = R * c;

	return d;
}