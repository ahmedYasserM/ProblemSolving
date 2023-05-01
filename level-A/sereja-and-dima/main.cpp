#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {

  int seraja = 0, dima = 0, left, right, n, input, max;
  char turn = 's';
  std::vector<int> cards;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> input;
    cards.push_back(input);
  }

  left = 0;
  right = n - 1;

  for (int i = 0; i < n; i++) {

    // get max between leftmost card and rightmost card
    if (cards[left] > cards[right]) {
      max = cards[left];
      left++;
    } else {
      max = cards[right];
      right--;
    }

    if (turn == 's') {
      seraja += max;
      turn = 'd';
    } else {
      dima += max;
      turn = 's';
    }
  }

  std::cout << seraja << "  " << dima << std::endl;
  return 0;
}
