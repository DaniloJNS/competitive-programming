#include <iostream>
#include <sstream>
#include <utility>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int Cases, res, sum = 0;

  cin >> Cases;

  while (Cases--) {
    int count = 0;

    for (int i = 0; i < 3; i++) {
      cin >> res;

      if (res == 1)
        count++;
    }
    if (count > 1)
      sum++;
  }
  cout << sum << endl;
}
