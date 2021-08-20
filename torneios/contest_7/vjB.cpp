#include <bits/stdc++.h>
#include <iostream>

using namespace std;


int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
cout
    int n , m, numSqrt, numSqrt1;
    
    cin >> n >> m;

    if(n == 1 && m == 1)
    {
        cout << 2 << endl;
        return 0;
    }
    else {
        int count = 0, a;
        for (int b = 0; b < m*m; b++)
        {
            a = m - b*b;

            if(a*a+b == n && a>=0)
                count++;
        }
        cout<<count<<endl;
    }

}

