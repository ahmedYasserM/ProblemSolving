#include <iostream>

int main(int argc, char *argv[]) {

  std::string s, t;
  std::cin >> s;
  std::cin >> t;
  int j = 0;

  int len = t.length();
  for (int i = 0; i < len; i++) {

    if (s[j] == t[i]) {
      j++;
    }
  }

  std::cout << ++j << std::endl;

  return 0;
}
