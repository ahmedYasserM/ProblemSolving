#include <iostream>

void gcd(int n, int d, int *a, int *b) {

  *a = n;
  *b = d;
  int diff;

  while (d > 0) {
    if (n > d) {
      diff = n - d;
      n = d;
      d = diff;
    } else {
      diff = d - n;
      d = diff;
    }
  }

  *a = *a / n;
  *b = *b / n;
}

int main(int argc, char *argv[]) {

  int y, w, n, d;

  std::cin >> y;
  std::cin >> w;
  if (y > w) {
    gcd(6 - y + 1, 6, &n, &d);
  } else {

    gcd(6 - w + 1, 6, &n, &d);
  }

  std::cout << n << "/" << d << std::endl;

  return 0;
}
