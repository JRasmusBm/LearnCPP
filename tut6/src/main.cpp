#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include "utils/range.hpp"
#include "utils/strings.hpp"

std::string CaesarCipher(std::string theString, int n, bool encrypt);
void StringToVectorTest();
void HandleCustomers();
void TestWhitespace();
void TestIndicies();
void TestReplace();
void TestCipher();


int main() {
  TestCipher();
  return 0;
}

void TestCipher() {
  std::string theString = "Make me secret";
  std::string encryptedStr = CaesarCipher(theString, -200, true);
  std::string decryptedStr = CaesarCipher(encryptedStr, -200, false);
  std::cout << "Encrypted: "<< encryptedStr << std::endl;
  std::cout << "Decrypted: "<< decryptedStr << std::endl;
}

std::string CaesarCipher(std::string theString, int n, bool encrypt) {
  std::string newString = "";
  n = (encrypt ? n : n * -1) % 26;
  for (char oldChar: theString) {
    if (!isalpha(oldChar)) {
      newString += oldChar;
      continue;
    }
    char newChar = oldChar + n;
    if(!isalpha(newChar) || 
        !((isupper(oldChar) && isupper(newChar)) ||
          (islower(oldChar) && islower(newChar)))) {
      newChar -= n / std::abs(n) * 26;
    }
    newString += newChar;
  }
  return newString;
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

