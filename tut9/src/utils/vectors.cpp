#include "vectors.hpp"
#include "range.hpp"

std::vector<int> SubVector(std::vector<int> theVector, int start, int end) {
  std::vector<int>::const_iterator first = theVector.begin() + start;
  std::vector<int>::const_iterator last = theVector.begin() + end;
  std::vector<int> newVec(first, last);
  return newVec;
}

std::vector<double> MultiplyEach(std::vector<double> theVector, double n) {
  std::vector<double> multipliedValues;
  std::for_each(
      theVector.begin(), theVector.end(), 
      [&, n](int x){ multipliedValues.push_back(x * n); });
  return multipliedValues;
}

std::vector<int> MultiplyEach(std::vector<int> theVector, int n) {
  std::vector<double> doubleVec(theVector.begin(), theVector.end());
  doubleVec = MultiplyEach(doubleVec, (double) n);
  std::vector<int> resultVector(doubleVec.begin(), doubleVec.end());
  return resultVector;
}

int Sum(std::vector<int> theVector) {
  std::vector<double> doubleVec(theVector.begin(), theVector.end());
  return Sum(doubleVec);
}

std::vector<int> DivisibleValues(std::vector<int> theVector, int divisor) {
  std::vector<int> divisibleValues;
  std::copy_if(theVector.begin(), theVector.end(), std::back_inserter(divisibleValues), [divisor](int x){ return (x % divisor) == 0; } );
  return divisibleValues;
}

double Sum(std::vector<double> theVector) {
  double sum = 0;
  std::for_each(theVector.begin(), theVector.end(), [&](double x){ sum += x;});
  return sum;
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

void DisplayVector(std::vector<int> theVector) {
  std::string line(6 * theVector.size(), '-');
  line += "\n";
  std::cout << line;
  for (int n: Range(theVector.size())) {
    printf("| %2d  ", n);
  }
  std::cout << "|\n" << line; 
  for (int n: Range(theVector.size())) {
    printf("| %2d  ", theVector[n]);
  }
  std::cout << "|\n" << line; 
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
