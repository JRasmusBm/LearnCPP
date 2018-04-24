#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <numeric>
#include "utils/range.hpp"
#include "utils/strings.hpp"
#include "utils/vectors.hpp"
#include "utils/recursion.hpp"

void TestSort();
void TestFactorial();

int main() {
  TestFactorial();
  return 0;
}

void TestFactorial() {
  std::cout << Factorial(5) << std::endl;
}

void TestSort() {
  std::vector<int> theVector = GenerateRandomVector(10, 1, 50);
  BubbleSort(theVector);
  for(auto k: theVector) {
    std::cout << k << ", ";
  }
  std::cout << std::endl;
}
