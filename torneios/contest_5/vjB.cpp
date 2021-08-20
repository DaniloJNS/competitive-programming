#include <bits/stdc++.h>

using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nCases, counter = 0, res = 0;
    char bracket;

    cin >> nCases;

    while (nCases--)
    {
        cin >> bracket;

        if(bracket == '(')
            counter++;

        else
            counter--;
        
        if(counter == -2)
            res = 1;
    }

    if(res == 1 || counter != 0)
        printf("No\n");
    
    else
        printf("Yes\n");  

    return 0;
}