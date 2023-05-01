#include <iostream>
#include <unordered_map>

int main(int argc, char *argv[]) {

  std::unordered_map<int, int> colors;
  int duplicates = 0, color;

  for (int i = 0; i < 4; i++) {
    std::cin >> color;
    colors[color]++;
  }

  for (auto color : colors) {

    duplicates += color.second - 1;
  }
  std::cout << duplicates << std::endl;

  return 0;
}
