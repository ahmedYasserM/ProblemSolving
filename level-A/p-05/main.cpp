#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {

  int item, rowIndex, colIndex, minCount;

  for (int i = 1; i < 26; i++) {

    std::cin >> item;

    if (i % 5 == 0) {
      rowIndex = i / 5;
      colIndex = 5;
    } else {
      rowIndex = i / 5 + 1;
      colIndex = i % 5;
    }

    if (item == 1)
      break;
  }

  minCount = std::abs(3 - rowIndex) + abs(3 - colIndex);

  std::cout << minCount << std::endl;

  return 0;
}
