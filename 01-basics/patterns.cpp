#include <iostream>
#include <ostream>

void pattern1(int rows, int columns) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      std::cout << "* ";
    }
    std::cout << std::endl;
  }
}

void pattern2(int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j <= i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

void pattern3(int rows) {
  for (int i = 1; i <= rows; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << j;
    }
    std::cout << std::endl;
  }
}

void pattern4(int rows) {
  for (int i = 1; i <= rows; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << i;
    }
    std::cout << std::endl;
  }
}

void pattern5(int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < rows - i; ++j) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

void pattern6(int rows) {
  for (int i = 0; i < rows; ++i) {
    for (int j = rows; j > i; --j) {
      std::cout << rows - j + 1;
    }
    std::cout << std::endl;
  }
}

int main() {
  //   pattern1(4, 4);
  pattern6(5);
  return 0;
}