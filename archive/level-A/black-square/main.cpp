#include <iostream>

int main(int argc, char *argv[]) {

  int arr[4];

  for (int i = 0; i < 4; i++) {
    std::cin >> arr[i];
  }

  std::string s;
  std::cin >> s;

  int res = 0, index;

  int len = s.length();
  for (int i = 0; i < len; i++) {

    index = s[i] - '0' - 1;

    res += arr[index];
  }

  std::cout << res << std::endl;

  return 0;
}
