#include "./range.hpp"

std::vector<int> Range(int start, int end, int step) {
  std::vector<int> result;
  for (int i = start; i < end; i += step ) {
    result.push_back(i);
  }
  return result;
}

std::vector<int> Range(int start, int end) {
  return Range(start, end, 1);
}

std::vector<int> Range(int end) {
  return Range(0, end, 1);
}
