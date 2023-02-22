#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {

  char start = 'a';
  int count = 0, d1, d2;
  std::string s;

  std::cin >> s;

  int len = s.length();

  for (int i = 0; i < len; i++) {

    d1 = std::abs((s[i]) - (start));
    d2 = 26 - d1;

    if (d1 < d2) {
      count += d1;
    } else {
      count += d2;
    }

    start = s[i];
  }

  std::cout << count << std::endl;
  return 0;
}
