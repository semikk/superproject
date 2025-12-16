#include <iostream>
#include <cmath>
#include <string>

struct Zoo {
  int Zebra;
  int Leo;
};

void print(const std::string& a) {
  std::cout << a << std::endl;
}

int main() {
  print("Hello, world!");
  std::cout << "sqrt(4) is " << std::sqrt(4) << std::endl;
  Zoo x{5, 9};
  std::cout << x.Zebra << std::endl;
  return 0;
}
