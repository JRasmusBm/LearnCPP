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
void TestFactorial();
void TestDisplayVector();
void TestFibonnaci();
void TestGeometry();

int main() {
  TestGeometry();
  return 0;
}

void TestGeometry() {
  std::vector<std::string> args;
  std::string input;
  std::cout << "Area: " << "\n";
  getline(std::cin, input);
  args = StringToVector(input, ' ');
  switch (args.size()) {
    case 1: 
      std::cout << Area(std::stoi(args[0])) << "\n"; break;
    case 2:
      std::cout << Area(std::stoi(args[0]), stoi(args[1])) << "\n"; break;
  }
}

void TestFibonnaci() {
  std::cout << Fibonnaci(25) << "\n";
}

void TestDisplayVector() {
  std::vector<int> theVector;
  theVector.push_back(10);
  theVector.push_back(8);
  theVector.push_back(2);
  DisplayVector(SubVector(theVector, 0, 3));
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
