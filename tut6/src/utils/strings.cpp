#include "strings.hpp"
#include "range.hpp"

std::string ReplaceAllSubstrings(
    std::string theString,
    std::string substring,
    std::string newString) {
  std::vector<int> matches = FindSubstringMatches(theString, substring);
  std::reverse(matches.begin(), matches.end());
  for (auto index: matches) {
    theString = theString.substr(0, index) 
      + newString 
      + theString.substr(index + substring.size(), theString.size());
  }
  return theString;
}

std::vector<int> FindSubstringMatches(std::string theString, std::string substring) {
  std::vector<int> indicies;
  int index = theString.find(substring, 0);
  while (index != std::string::npos) {
    indicies.push_back(index);
    index = theString.find(substring, index + 1);
  }
  return indicies;
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

std::string TrimWhitespace(std::string input) {
  std::string whitespaces(" \t\f\n\r");
  input.erase(input.find_last_not_of(whitespaces) + 1);
  input.erase(0, input.find_first_not_of(whitespaces));
  return input;
}

