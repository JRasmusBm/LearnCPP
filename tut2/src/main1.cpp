#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

const float kilometers = 1.60934;

int main() {

  std::string sAge = "0";
  std::cout << "Enter your age: ";
  getline(std::cin, sAge);
  int nAge = std::stoi(sAge);

  if((nAge >= 1) && (nAge <= 18)) {
    std::cout << "Important Birthday \n";
  } else if ((nAge == 21) || (nAge == 50)) {
    std::cout << "Important Birthday \n";
  } else if (nAge >= 65) {
    std::cout << "Important Birthday \n";
  } else {
    std::cout << "Unimportant Birthday \n";
  }

  return 0;
}
