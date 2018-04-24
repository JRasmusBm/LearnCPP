#include "recursion.hpp"

int Factorial(int number) {
  if (number == 0) {
    return 1;
  }
  return number * Factorial(number - 1);
}


