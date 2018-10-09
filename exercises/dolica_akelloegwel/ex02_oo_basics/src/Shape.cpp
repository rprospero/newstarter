#include "Shape.h"

Shape::Shape(double a, double p, std::string t, int n)
{
	area = a;
	perimeter = p;
	type = t;
	numSides = n;
}
double Shape::GetPerimeter()
{
	return perimeter;
}
double Shape::GetArea()
{
	return area;
}
std::string Shape::GetType()
{
	return type;
}
int Shape::GetSides()
{
	return numSides;
}
