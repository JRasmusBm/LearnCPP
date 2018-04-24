#ifndef VECTORS
#define VECTORS

#include <vector>
#include <ctime>
#include <cstdlib>

void BubbleSort(std::vector<int>& theVector);
std::vector<int> GenerateRandomVector(int n, int min, int max);
void DisplayVector(std::vector<int>);

#endif
