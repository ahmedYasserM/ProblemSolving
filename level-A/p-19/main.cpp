#include <iostream>
#include <vector>

void birds() {
  int n, birdCount; // n --> number of wires .. birdCount  --> number of birds
                    // on each wire

  std::vector<int> w; // w --> each item index represnt a wire number and its
                      // value represnt number of birds on this wire.

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> birdCount;
    w.push_back(birdCount);
  }

  int lastWire =
      w.size() -
      1; // lastWire --> holds the index of the last wire in vector w.
  int m, x, y, wIndex;

  std::cin >> m; // number of tries to shoot an bird.

  for (int i = 0; i < m; i++) {
    std::cin >> x; // wire number
    std::cin >> y; // bird position

    wIndex = x - 1; // the index of a wire whre the bird shoot in the vecotr w.

    if (wIndex > 0) {
      w[wIndex - 1] += y - 1;
    }

    if (wIndex < lastWire) {
      w[wIndex + 1] += w[wIndex] - y;
    }
    w[wIndex] = 0;
  }

  for (auto x : w) {
    std::cout << x << std::endl;
  }
}

int main(int argc, char *argv[]) {

  birds();

  return 0;
}
