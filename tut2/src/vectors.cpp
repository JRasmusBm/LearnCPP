#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

const float kilometers = 1.60934;

int main() {

  std::vector<int> vecnRandNums(2);
  vecnRandNums[0] = 10;
  vecnRandNums[1] = 20;
  vecnRandNums.push_back(30);
  std::cout << "Last Index : " << vecnRandNums[vecnRandNums.size() - 1] 
    << std::endl;

  std::string sSentence = "This is a random sentence.";
  std::vector<std::string> vecsWords;
  std::stringstream ss(sSentence);
  std::string sIndivStr;
  char cSpace = ' ';

  while(getline(ss, sIndivStr, cSpace)) {
    vecsWords.push_back(sIndivStr);
  }

  for(int i = 0; i < vecsWords.size(); i++) {
    std::cout << vecsWords[i] << std::endl;
  }

  return 0;
}
