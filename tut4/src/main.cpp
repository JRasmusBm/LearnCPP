#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int end, int step);
void whileLoop();
std::string PineTree(int height);

int main() {
  int height;
  std::cout << "How tall is the tree: " ;
  std::cin >> height;
  std::string tree = PineTree(height);
  std::cout << tree;

  return 0;
}

// Functions

void whileLoop() {
  int i = 1;

  while (i <= 20) {
    if((1 % 2) == 0) {
      i+= 1;
      continue;
    }
    if (i == 15) break;
    std::cout << i << std::endl;
  }

}

std::string PineTree(int height) {
  int row = 0;
  std::string tree = "";
  while (row < height) {
    tree += std::basic_string((height-row), ' ');
    tree += std::basic_string((2 * row + 1), '#');
    tree += '\n';
    row++;
  }
  tree += std::basic_string((height), ' ') + "#\n";
  return tree;
}

// STD

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
