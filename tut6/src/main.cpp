#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include "utils/range.hpp"
#include "utils/strings.hpp"

void StringToVectorTest();
void HandleCustomers();
void TestWhitespace();
void TestIndicies();
void TestReplace();

int main() {
  TestReplace();
  return 0;
}

void TestReplace() {
  std::cout << ReplaceAllSubstrings("To know or not to know", "know", "be") 
    << std::endl;

}

void TestIndicies() {
  std::string phrase = "To be or not to be"; 
  std::vector<int> matches = FindSubstringMatches(phrase, "be");
  for (auto index: matches) {
    std::cout << index << " ";
  }
  std::cout << std::endl;
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

void TestWhitespace() {
  std::string aStr = "              Just some random words         ";
  aStr = TrimWhitespace(aStr); 
  std::cout << "*" << aStr << "*" << std::endl;
}

