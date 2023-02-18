#include <iostream>

int main(int argc, char *argv[]) {

  int n, betya, vasya, tonya, sum, count = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {

    std::cin >> betya;
    std::cin >> vasya;
    std::cin >> tonya;

    sum = 0;
    sum += betya + vasya + tonya;

    if (sum >= 2) {

      count++;
    }
  }

  std::cout << count << std::endl;

  return 0;
}
