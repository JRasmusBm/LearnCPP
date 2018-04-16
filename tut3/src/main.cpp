#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int end, int step);
int GetInvestment();
double GetInterest();
int GetYears();
double CalculateValue(double investment, double interest, int years);

int main() {
  double investment = GetInvestment();
  double interest = GetInterest();
  int years = GetYears();
  double value = CalculateValue(investment, interest, years);
  std::cout << "Value after " << years << " years: " << value << std::endl;
}

int GetInvestment() {
  std::string sInvestment;
  std::cout << "How much to invest: " << std::endl;
  std::cin >> sInvestment;
  return std::stoi(sInvestment);
}

double GetInterest() {
  std::string sInterest;
  std::cout << "Interest Rate: " << std::endl;
  std::cin >> sInterest;
  return std::stoi(sInterest) * 0.01;
}

int GetYears() {
  std::string sYears;
  std::cout << "Years: " << std::endl;
  std::cin >> sYears;
  return std::stoi(sYears);
}

double CalculateValue(double investment, double interest, int years) {
  double result = investment;
  std::cout << "Interest Rate: " << interest << std::endl;
  for(auto y: Range(1, years + 1, 1)) {
    result *= (1 + interest);
  }
  return result;
}

std::vector<int> Range(int start, int end, int step) {
  std::vector<int> result;
  for (int i = start; i < end; i += step ) {
    result.push_back(i);
  }
  return result;
}
