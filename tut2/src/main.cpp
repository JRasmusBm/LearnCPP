#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

const float kilometers = 1.60934;

int main() {

  std::string sAge = "0";
  std::cout << "Enter age: ";
  getline(std::cin, sAge);
  int nAge = std::stoi(sAge);

  if(nAge == 5) {
    std::cout << "Go to Kindergarten\n";
  } else if ((6 <= nAge) && (nAge <= 17)) {
    std::cout << "Go to grade " <<  nAge-5 << std::endl;
  } else if (17 < nAge) {
    std::cout << "Go to college \n";
  } else {
    std::cout << "Too young for school \n";
  }

  return 0;
}
