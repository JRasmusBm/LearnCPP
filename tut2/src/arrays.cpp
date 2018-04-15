#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

const float kilometers = 1.60934;

int main() {

  int arrnNums[10] = {1};
  int arrnNums2[] = {1, 2, 3};
  int arrnNums3[5] = {8, 9};

  std::cout << "1st Value: " << arrnNums3[0] << std::endl;
  arrnNums3[0] = 7;
  std::cout << "1st Value: " << arrnNums3[0] << std::endl;

  std::cout << "Array size : " <<
    sizeof(arrnNums3) / sizeof(*arrnNums3) << std:: endl;

  int arrnNums4[2][2][2] = {{{1,2}, {3,4}}, {{5, 6}, {7, 8}}};

  std::cout << arrnNums4[1][1][1] << std::endl;

  return 0;
}
