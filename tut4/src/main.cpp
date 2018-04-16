#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include "utils/range.cpp"

void Division();
void BuiltInException();
void SecretNumber();
void PineTree();

std::string PineTree(int height);

int main() {

  return 0;
}



// Functions

void SecretNumber() {

  srand(time(NULL));
  int secretNumber = std::rand() % 11;
  int guess = 0;

  do {
    std::cout << "Guess the number: " ;
    std::cin >> guess;
    if (guess > secretNumber) {
      std::cout << "Too Big!" << std::endl;
    }
    if (secretNumber > guess) {
      std::cout << "Too Small!" << std::endl;
    }
  } while(secretNumber != guess);

  std::cout << "You guessed it! " << std::endl;

}

void BuiltInException() {

  try {
    std::cout << "Throwing exception" << std::endl;
    throw std::runtime_error("Error Occurred");
    std::cout << "Can you print me?" << std::endl;
  } catch (std::exception &exp) {
    std::cout << "Handled Exception: " << exp.what() << std::endl;
  }

  catch(...) {
    std::cout << "Default Exception" << std::endl;
  }

}

void Division() {
  double num1 = 0, num2 = 0;

  std::cout << "Enter number 1: ";
  std::cin >> num1;
  std::cout << "Enter number 2: ";
  std::cin >> num2;

  try {
    if (num2 == 0) {
      throw "Division by zero is not possible";
    } else {
      printf("%.f / %.1f = %.2f\n", num1, num2, (num1 / num2));
    }
  } catch(const char* exp) {
    std::cout << "Error: " << exp << std::endl;
  }
}

void PineTree() {
  int height;
  std::cout << "How tall is the tree: " ;
  std::cin >> height;
  std::string tree = PineTree(height);
  std::cout << tree;
}

std::string PineTree(int height) {
  std::string tree = "";
  for (int row : Range(height)) {
    tree += std::basic_string((height-row), ' ');
    tree += std::basic_string((2 * row + 1), '#');
    tree += '\n';
    row++;
  }
  tree += std::basic_string((height), ' ') + "#\n";
  return tree;
}
