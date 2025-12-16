#include <iostream>
#include <cmath>

struct Zoo {
  int Zebra;
  int Leo;
};

int main() {
  std::cout << "Hello, world!" << std::endl;
  std::cout << "sqrt(4) is " << std::sqrt(4) << std::endl;
  Zoo x{5, 9};
  std::cout << x.Zebra << std::endl;
  return 0;
}
