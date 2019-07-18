#include "circle.h"
#include "rectangle.h"
#include "shapeSorter.h"
#include "square.h"
#include "triangle.h"

#include <iostream>
#include <vector>

int main(int, char **) {
  std::vector<const Shape *> shapes;

  // Make some shapes.
  Rectangle *r1 = new Rectangle(5, 10);
  Rectangle *r2 = new Rectangle(50, 10);
  Triangle *t1 = new Triangle(10, 23);
  Triangle *t2 = new Triangle(2, 60);
  Square *s1 = new Square(67);
  Circle *c1 = new Circle(42);

  // Add to vector.
  shapes.push_back(r1);
  shapes.push_back(r2);
  shapes.push_back(t1);
  shapes.push_back(t2);
  shapes.push_back(s1);
  shapes.push_back(c1);

  // Printing squares.
  std::cout << "Squares: \n\n";
  ShapeSorter::printMatchingName(shapes, "Square");

  // Printing 4 Sided shapes.
  std::cout << "\n4 Sided Shapes:\n\n";
  ShapeSorter::printMatchingSides(shapes, 4);

  // Printing in order of area.
  std::cout << "\nOrdered By Area:\n\n";
  ShapeSorter::printOrderedByArea(shapes);

  // Printing in order of perimiter.
  std::cout << "\nOrdered By Perimiter:\n\n";
  ShapeSorter::printOrderedByPerimiter(shapes);

  for (const Shape *s : shapes) {
    delete s;
  }
  std::cout << "Done!\n";
}