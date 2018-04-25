#ifndef VECTORS
#define VECTORS

#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

void BubbleSort(std::vector<int>& theVector);
std::vector<int> GenerateRandomVector(int n, int min, int max);
void DisplayVector(std::vector<int>);
std::vector<int> SubVector(std::vector<int> theVector, int start, int end); 
int Sum(std::vector<int> theVector); 
double Sum(std::vector<double> theVector); 
std::vector<int> DivisibleValues(std::vector<int> theVector, int divisor);
std::vector<int> MultiplyEach(std::vector<int> theVector, int n);
std::vector<double> MultiplyEach(std::vector<double> theVector, double n);

#endif
