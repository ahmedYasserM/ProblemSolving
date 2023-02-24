#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {

  int k, r, minCount = 10;

  std::cin >> k;
  std::cin >> r;

  int rem;
  for (int i = 1; i < 11; i++) {
    rem = (i * k) % 10;

    if (rem == r || rem == 0) {
      minCount = i;
      break;
    }
  }

  std::cout << minCount << std::endl;

  return 0;
}
