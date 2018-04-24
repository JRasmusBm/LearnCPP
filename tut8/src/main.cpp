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

void TestSort();

int main() {
  TestSort();
  return 0;
}

void TestSort() {
  std::vector<int> theVector = GenerateRandomVector(10, 1, 50);
  BubbleSort(theVector);
  for(auto k: theVector) {
    std::cout << k << ", ";
  }
  std::cout << std::endl;
}
