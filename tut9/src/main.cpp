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
#include "utils/geometry.hpp"

void TestSort();
void TestDivisibleValues();
void TestForEach();
void TestMultiplyEach();

int main() {
  TestMultiplyEach();

  return 0;
}

void TestMultiplyEach() {
  std::vector<int> values = GenerateRandomVector(10, 1, 50);
  DisplayVector(values);
  DisplayVector(MultiplyEach(values, 3));
}

void TestForEach() {
  std::vector<int> values = GenerateRandomVector(10, 1, 50);
  DisplayVector(values);
  std::cout << "Sum: " << Sum(values) << "\n";
}

void TestDivisibleValues() {
  std::vector<int> values = GenerateRandomVector(10, 1, 50);
  DisplayVector(values);
  DisplayVector(DivisibleValues(values, 6));
}

void TestSort() {
  std::vector<int> values = GenerateRandomVector(10, 1, 50);
  DisplayVector(values);
  std::sort(values.begin(), values.end(), [](int x, int y){ return x < y;});
  DisplayVector(values);
}
