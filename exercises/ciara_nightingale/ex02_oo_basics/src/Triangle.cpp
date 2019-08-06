#include "Triangle.h"
#include "Shape.h"
#include <cmath>

// Construct the triangle withdimentions set to zero if no arguments are given
Triangle::Triangle() 
		: Shape("Triangle", 3), m_base(0), m_height(0) {}

/**construct the triangle
*
* @param base length of the base side
* @param height height of the triangle
*
*/
Triangle::Triangle(double base, double height)
    : Shape("Triangle", 3), m_base(base), m_height(height) {}

/** Calculates the area
*
* @returns The value of the area as a double
*
*/
double Triangle::area() const { return m_base * m_height; }

/** Calculates the perimeter
*
* @returns The value of the perimeter as a double
*
*/
double Triangle::perimeter() const {
  return m_base + 2 * sqrt(pow(m_height, 2) + (pow(m_base, 2) / 4));
}
