#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include "utils/range.cpp"

void SecretNumber();

std::string Encode(std::string s);
std::string Decode(std::string s);

int main() {
  SecretNumber();

  return 0;
}



// Functions

void SecretNumber() {
  std::string original, coded, decoded;
  original = "Hello Football";
  coded = Encode(original);
  decoded = Decode(coded);
  std::cout << decoded << std::endl;
}

std::string Encode(std::string s) {
  std::string newString = "";
  for (char c: s) {
    newString += std::to_string((int) c - 40);
  }
  return newString;
}

std::string Decode(std::string s) {
  std::string newString = "", charCode;
  char decodedChar;
  for (int i: Range(0, s.length(), 2)) {
    charCode = s[i];
    charCode += s[i+1];
    decodedChar = stoi(charCode) + 40;
    newString += decodedChar;
  }
  return newString;
}
