
#include <iostream>
#include "compare.h" // preprocesor



int main() {
  // Your code here
  int max_number = max(3, 4);
  std::cout << "max : " << max_number << std::endl;
  int a = 0;
  int b = 1;
  std::cout << ((a++) + (++b))  << " eee" << std::endl;
  return 0;
}
