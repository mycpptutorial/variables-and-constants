#include <iostream>

const int DEFAULT_SIZE = 5;

int main() {

  std::cout << "Here is the value of DEFAULT_SIZE: ";
  std::cout << DEFAULT_SIZE << '\n';

  std::cout << "You cannot change the value of a constant" << '\n';

  std::cout << "But you can use its value in other expressions or as a function input." << '\n';
  int currentSize = 3 + DEFAULT_SIZE;
  std::cout << "For example: int currentSize = 3 + DEFAULT_SIZE: ";
  std::cout << currentSize << "\n";
  return 0;
}
