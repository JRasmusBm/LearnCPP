#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

const float kilometers = 1.60934;

int main() {

  std::string sQuestion ("Enter Distance (Miles): ");
  std::string sMiles;
  std::cout << sQuestion;
  getline(std::cin, sMiles);
  float miles = std::stof(sMiles);
  
  printf("Distance (km): %f\n", miles * kilometers);

  return 0;
}
