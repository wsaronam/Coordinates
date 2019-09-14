#ifndef OUTPUT_HPP
#define OUTPUT_HPP


void ReturnStartLocation(double CoordinateOne, std::string LatDirection, double CoordinateTwo, std::string LonDirection, std::string LocationName);
void ReturnClosestLocation(double CoordinateOne, std::string LatDirection, double CoordinateTwo, std::string LonDirection, std::string LocationName, double Distance);
void ReturnFarthestLocation(double CoordinateOne, std::string LatDirection, double CoordinateTwo, std::string LonDirection, std::string LocationName, double Distance);



#endif // OUTPUT_HPP