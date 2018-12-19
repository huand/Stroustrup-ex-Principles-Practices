// Copyright 2018 Hubert Andre
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class NameValue {
 private:
  std::string name;
  int value;

 public:
  NameValue() : name(""), value(0) {}
  explicit NameValue(std::string s) : name(s), value(0) {}
  NameValue(std::string s, int v) : name(s), value(v) {}
  void getdata() {
    std::cout << "name value: ";
    std::cin >> name >> value;
  }
  int putvalue() { return value; }
  std::string putname() { return name; }
  void display();
  ~NameValue() {}
};

void c06e04() {
  try {
    std::cout << "Enter list of Name Value (\"NoName 0\" to stop)" << std::endl;
    std::vector<NameValue> NV;
    do {
      NameValue nv;
      nv.getdata();
      NV.push_back(nv);
      for (auto it = NV.begin(); it < NV.end() - 1; it++) {
        if (it->putname() == nv.putname()) {
          std::cout << "duplicate name, deleting entry" << std::endl;
          NV.pop_back();
        }
      }
    } while (NV.back().putname() != "NoName");
    NV.pop_back();
    std::cout << "##################\n";
    std::for_each(NV.begin(), NV.end(), [](auto& x) { x.display(); });
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}

void NameValue::display() {
  std::cout << putname() << " " << putvalue() << std::endl;
}
