#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include "utils/range.cpp"

std::vector<std::string> StringToVector(std::string theString, char separator);
std::string VectorToString(std::vector<std::string> theVector, char separator);
void StringToVectorTest();
void HandleCustomers();

int main() {
  HandleCustomers();
  return 0;
}

void HandleCustomers() {
  std::vector<std::string> vCusts(3);
  vCusts[0] = "Bob";
  vCusts[1] = "Sue";
  vCusts[2] = "Tom";

  std::string sCusts = VectorToString(vCusts, ' ');
  std::cout << sCusts << std::endl;
}

void StringToVectorTest() {
  std::vector<std::string> vec =
    StringToVector("This is a random string", ' ');
  for (auto word: vec) {
    std::cout  << word << std::endl;
  }
}

std::string VectorToString(std::vector<std::string> theVector, char separator) {
  std::string result = "";
  for (auto word: theVector) {
    result += word + separator;
  }
  return result;
}

std::vector<std::string> StringToVector(std::string theString, char separator)
{
  std::vector<std::string> vecsWords;

  std::stringstream ss(theString);
  std::string sIndivStr;
  while(getline(ss, sIndivStr, separator)) {
    vecsWords.push_back(sIndivStr);
  }
  return vecsWords;
}
