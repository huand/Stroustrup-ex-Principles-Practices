// Copyright 2018 Hubert Andre
#include <cmath>
#include <iostream>
#include <vector>
std::vector<double> solve2(const std::vector<double> &coeff);
void c05e07() {
  double a, b, c;
  a = b = c = 0;
  std::cout << "Enter the coefficient of the 2nd order polynomial equation to "
               "solve: ax^2+bx+c=0\n";
  std::cout << "\t a= ";
  std::cin >> a;
  std::cout << "\t b= ";
  std::cin >> b;
  std::cout << "\t c= ";
  std::cin >> c;
  std::vector<double> coeff{a, b, c};
  std::vector<double> poles;
  poles = solve2(coeff);
  std::cout << poles[0] << " " << poles[1] << std::endl;
}

std::vector<double> solve2(const std::vector<double> &coeff) {
  double a = coeff[0];
  double b = coeff[1];
  double c = coeff[2];
  double delta = b * b - 4 * a * c;
  double p1 = (-b - sqrt(delta)) / 2 / a;
  double p2 = (-b + sqrt(delta)) / 2 / a;

  std::vector<double> poles;
  poles.push_back(p1);
  poles.push_back(p2);
  return poles;
}
