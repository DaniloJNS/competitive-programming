#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, q, input, limit = 0, colors[51];

  cin >> n >> q;

  memset(colors, 0, sizeof(colors));

  for (int i = 1; i <= n; i++) {
    cin >> input;

    if (!colors[input])
      colors[input] = i;

    if (input > limit)
      limit = input;
  }
  // apenas a primeira posição de cada cor é pesquisada
  // Portanto, não necessario guarda todas as posições so a primeira entrada
  for (int i = 0; i < q; i++) {
    cin >> input;

    cout << colors[input] << " " << endl;

    for (int i = 1; i <= limit; i++)
      if (i != input &&
          colors[input] > colors[i]) // posições menores a que foi encontra
                                     // sofrem acrecimo de +1
        colors[i]++;

    colors[input] = 1;
  }
  cout << endl;
}
