#include <bits/stdc++.h>

using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, count = 0, temp = 0;
    cin >> n >>k;
    while (temp<k)
    {
        count++;
        if(count % n !=0)
            temp++;
    }

    cout << count << endl;

    return 0;

}
