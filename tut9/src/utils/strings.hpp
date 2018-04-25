#ifndef STRINGS
#define STRINGS

#include <cstdlib>
#include <sstream>
#include <vector>
#include <algorithm>

std::string VectorToString(std::vector<std::string> theVector, char separator);
std::vector<std::string> StringToVector(std::string theString, char separator);
std::string TrimWhitespace(std::string input);
std::vector<int> FindSubstringMatches(std::string theString, std::string substring);
std::string ReplaceAllSubstrings(
    std::string theString,
    std::string substring,
    std::string newString
    );

#endif

