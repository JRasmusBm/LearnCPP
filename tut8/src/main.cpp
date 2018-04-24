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

void TestSort();
void BubbleSort(std::vector<int>& theVector);
std::vector<int> GenerateRandomVector(int n, int min, int max);

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

std::vector<int> GenerateRandomVector(int n, int min, int max) {
  std::vector<int> values;
  srand(time(NULL));
  int i = 0, value = 0;

  for (auto i: Range(n)) {
    value = min + std::rand() % ((max + 1) - min);
    values.push_back(value);
  }
  return values;
}

void BubbleSort(std::vector<int>& theVector) {
  int i = theVector.size() - 1;
  while(1 <= i) {
    int j = 0;
    while (j < i) {
      printf("\nIs %d > %d\n", theVector[j], theVector[j + 1]);
      
      if(theVector[j+1] <= theVector[j]) {
        std::cout << "Switch\n";
        int temp = theVector[j];
        theVector[j] = theVector[j+1];
        theVector[j+1] = temp;
      } else {
        std::cout << "Don't switch\n";
      }

      j += 1;

      for(auto k: theVector) {
        std::cout << k << ", ";
      }

    }
    std::cout << "\nEnd of Round\n";
    i-=1;
  }
}
