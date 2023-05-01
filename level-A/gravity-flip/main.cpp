#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {

  int n, input;
  std::vector<int> vec;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> input;
    vec.push_back(input);
  }

  // insertion sort

  int key;
  int i;
  for (int j = 1; j < n; j++) {

    key = vec[j];
    i = j - 1;
    while (vec[i] > key && i >= 0) {
      vec[i + 1] = vec[i];
      i--;
    }

    vec[i + 1] = key;
  }

  for (int item : vec) {

    std::cout << item << "  ";
  }

  return 0;
}
