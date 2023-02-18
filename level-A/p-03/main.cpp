#include <iostream>

int main(int argc, char *argv[]) {

  int limak_weight, bob_wight, years = 0;

  std::cin >> limak_weight;
  std::cin >> bob_wight;

  while (limak_weight <= bob_wight) {

    years++;
    limak_weight *= 3;
    bob_wight *= 2;
  }

  std::cout << years << std::endl;

  return 0;
}
