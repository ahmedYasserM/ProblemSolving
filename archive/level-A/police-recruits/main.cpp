#include <iostream>

int main(int argc, char *argv[]) {

  int crimes = 0, police = 0, input, n;

  std::cin >> n;

  for (int i = 0; i < n; i++) {

    std::cin >> input;

    if (input == -1 && police == 0) {
      crimes++;
    } else if (input == -1 && police > 0) {
      police--;
    } else {
      police += input;
    }
  }

  std::cout << crimes << std::endl;

  return 0;
}
