#include "geometry.hpp"

double Area(double radius) {
  return std::pow(radius, 2) * M_PI;

}

double Area(double height, double width) {
  return height * width;
}
