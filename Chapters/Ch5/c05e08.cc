// Copyright 2018 Hubert Andre

#include <iostream>
#include <numeric>
#include <vector>
void c05e08() {
  std::cout << "Enter how many number to add: ";
  int n;
  std::cin >> n;
  std::cout << "Enter a space-separated sequence of integers: ";
  std::vector<int> seq;
  int x;
  while (std::cin >> x) {
    seq.push_back(x);
  }
  if (n <= seq.size()) {
    int sum = std::accumulate(seq.begin(), seq.begin() + n, 0);
    std::cout << "the sum is " << sum << std::endl;
  } else {
    std::cout << "sequence not long enough\n";
  }
  std::cout << seq.at(1000) << std::endl;
}
