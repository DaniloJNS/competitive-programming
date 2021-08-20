#include <bits/stdc++.h>
#include <valarray>

using namespace std;

int solver(int n, int k, int acumulador) {
  int temp, div = k / n;
  cout<<acumulador<<"-"<<div<<endl;
  temp = acumulador + div;
  cout<< temp <<"*"<<div<<endl;
  if(div%n >0 && div > n)
  {
    temp++;
    cout<< temp <<" R "<<div%n<<endl;
  }
  if(div >= n)
  solver(n,div,temp);
  else
  {
    if(temp%n == 0)
    temp++;
    return temp;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int nCases, n, k;

  cin >> nCases;

  while (nCases--) {
    cin >> n >> k;
    if(n > k) {
      cout<< k << endl;
      continue;
    }
    if(k%n >0)
    cout<<solver(n,k,k+1)<<endl;
    cout<<solver(n,k,k)<<endl;

  }

  return 0;
}
