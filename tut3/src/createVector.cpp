#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <numeric>

int main() {

  std::vector<int> myVec(10);
  std::iota(std::begin(myVec), std::end(myVec), 0);
  
  for(auto x: myVec) {
    if (x % 2 == 0) {
      std::cout << x << std::endl;
    }
  }

  return 0;
}
