#include <iostream>

bool has_value = true;

long long add(int num1, int num2) {
  std::cout << "The value of global varable 'has_value' is accessible here in add() method as well its value is: ";
  std::cout << has_value << std::endl;
  std::cout << "THe global varable 'enabled' is NOT accessible here in add() because it is defined after function definition";

  std::cout << "The value of local varable 'num1' which is the first function argument is: ";
  std::cout << num1 << std::endl;
  std::cout << "The value of local varable 'num2' which is the second function argument is: ";
  std::cout << num1 << std::endl;
  return num1 + num2;
}

bool enabled = true;

int main() {
  std::cout << "The value of global varable 'enabled' is: ";
  std::cout << enabled << std::endl;

  int a = 10;

  std::cout << "The value of local varable 'a' is: ";
  std::cout << a << std::endl;

  long b, c;

  b = 100;
  c = b + 10;

  std::cout << "The value of local varable 'b' is: ";
  std::cout << b << std::endl;
  std::cout << "The value of local varable 'c' which is 'b + 10' is: ";
  std::cout << c << std::endl;

  long long total;

  total = add(45, 34);

  std::cout << "The value of local varable 'total' that is the result of add(45, 34), is: ";
  std::cout << total << std::endl;
}
