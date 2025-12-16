#include <iostream>

struct Zoo {
  int Zebra;
  int Leo;
};

int main() {
  std::cout << "Hello, world!" << std::endl;
  Zoo x{5, 9};
  std::cout << x.Zebra << std::endl;
  return 0;
}
