#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>

const float kilometers = 1.60934;

bool hasOnlyDigits(const std::string s) {
  return s.find_first_not_of("0123456789") == std::string::npos;
}

int main() {

  std::vector<std::string> vecsWords;
  std::string sIndivStr;
  char cSpace = ' ';
  bool running = true;
  double arg1, arg2, result;
  std::string input;

  while(running) {
    std::cout << "Enter calculation (ex. 5 + 6): ";

    vecsWords.clear();
    getline(std::cin, input);
    std::stringstream ss(input);
    while(getline(ss, sIndivStr, cSpace)) {
      vecsWords.push_back(sIndivStr);
    }
    if(vecsWords[0] == "q") {
      break;
    }
    if(vecsWords.size() != 3) {
      std::cout << "Invalid input length (" << vecsWords.size() << ")." << std::endl;
      continue;
    } 
    if (
        vecsWords[1] != "+" &&  
        vecsWords[1] != "-" &&
        vecsWords[1] != "*" && 
        vecsWords[1] != "/"
        ) {
      std::cout << "Only supported operators are +, -, * and /." 
        << std::endl;
      continue;
    } 
    arg1 = std::stoi(vecsWords[0]);
    arg2 = std::stoi(vecsWords[2]);
    if (vecsWords[1] == "+") result = arg1 + arg2;
    if (vecsWords[1] == "*") result = arg1 * arg2;
    if (vecsWords[1] == "-") result = arg1 - arg2;
    if (vecsWords[1] == "/") result = arg1 / arg2;
    std::cout << "Result: " << result << std::endl;
  }
    
  return 0;
}
