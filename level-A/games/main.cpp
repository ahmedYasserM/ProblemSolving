#include <iostream>
#include <unordered_map>

int main(int argc, char *argv[]) {

  std::unordered_map<int, int> home;
  std::unordered_map<int, int> guest;

  int h, a, n, count = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {

    std::cin >> h;
    home[h]++;

    std::cin >> a;
    guest[a]++;
  }

  for (auto x : home) {
    count += x.second * guest[x.first];
  }

  std::cout << count << std::endl;

  return 0;
}
