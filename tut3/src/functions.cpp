#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <numeric>

double AddNumbers(double num1, double num2);
void Pointers();
void Pointers2();
void AssignAge3(int* pAge);
void UseAssignAge();
void UseDoubleArray();
void DoubleArray(int* arr, int size);

int main() {
  UseDoubleArray();

  return 0;
}

// Functions

double AddNumbers(double num1, double num2) {
  return num1 + num2;
}

void Pointers() {

  int age = 43;
  int* pAge = NULL;

  pAge = &age;
  std:: cout << "Adress: " << pAge << std::endl;

  std::cout << "Value at Address: " << *pAge << std::endl;
  
}

void Pointers2() {

  int intArray[] = {1, 2, 3, 4};
  int* pIntArray = intArray;

  std::cout << "1st " << *pIntArray << " Address " << pIntArray << std::endl;
  pIntArray++;
  std::cout << "2st " << *pIntArray << " Address " << pIntArray << std::endl;
  pIntArray--;
  std::cout << "1st " << *pIntArray << " Address " << pIntArray << std::endl;
}

void UseAssignAge() {
  int age = 43;
  AssignAge3(&age);
  std::cout << "Pointer Age " << age << std::endl;
}

void AssignAge3(int* pAge) {
  *pAge = 22;
}

void UseDoubleArray() {
  int arr[] = {1, 2, 3, 4};
  DoubleArray(arr, 4);
  for(int i = 0; i < 4; ++i) {
    std::cout << "Array " << i << " " << arr[i] << std::endl;
  }
}
void DoubleArray(int* arr, int size) {
  for(int i = 0; i< size; ++i) {
    arr[i] = arr[i] * 2;
  }
}
