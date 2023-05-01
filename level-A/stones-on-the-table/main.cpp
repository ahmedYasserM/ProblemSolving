#include <iostream>

int main(int argc, char *argv[]) {

  int n, cand = 0, stonesCount = 0;
  std::string colors;
  char current, prev;

  std::cin >> n;

  std::cin >> colors;
  prev = colors[0];

  for (int i = 1; i < n; i++) {

    current = colors[i];

    if (current == prev) {
      cand++;
    } else if (cand != 0) {
      stonesCount += cand;
      cand = 0;
    }

    prev = current;
  }

  if (cand != 0) {
    stonesCount += cand;
  }

  std::cout << stonesCount << std::endl;

  return 0;
}
