#include "recursion.hpp"

int Factorial(int number) {
  if (number == 0) {
    return 1;
  }
  return number * Factorial(number - 1);
}

int Fibonnaci(int number) {
  if (number == 0) {
    return 1;
  }
  if (number == 1) {
    return 1;
  }
  return Fibonnaci(number-2) + Fibonnaci(number-1);
}


