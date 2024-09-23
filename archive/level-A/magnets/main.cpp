#include <iostream>

int main(int argc, char *argv[]) {

  int n, groupCount = 0;
  std::string tmp, input;

  std::cin >> n;
  std::cin >> input;
  tmp = input;
  groupCount++;

  for (int i = 0; i < n - 1; i++) {
    std::cin >> input;

    if (input != tmp) {
      groupCount++;
      tmp = input;
    }
  }

  std::cout << groupCount << std::endl;
  return 0;
}
