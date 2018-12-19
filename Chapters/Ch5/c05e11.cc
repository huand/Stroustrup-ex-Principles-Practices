// Copyright 2018 hubert andre

#include <iostream>
#include <vector>

void c05e11() {
  std::vector<int> fib{0, 1};
  while (fib.at(fib.size() - 2) <= fib.at(fib.size() - 1)) {
    fib.push_back(fib.at(fib.size() - 2) + fib.at(fib.size() - 1));
    std::cout << fib.back() << " ";
    std::cout.flush();
  }
  fib.pop_back();
  std::cout << std::endl
            << "the largest fibonacci number that fits in an int is: "
            << fib.back() << std::endl;
}
