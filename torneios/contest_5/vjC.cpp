#include <bits/stdc++.h>

using namespace std;



int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> Players;

    int nPlayer, input;

    long long nVictory, victory = 0;

    cin >> nPlayer >>  nVictory ;

    for(int i = 0; i<nPlayer; i++)
    {
        cin >> input;
        Players.push_back(input);
    }

    if(nVictory > nPlayer)
    {
        sort(Players.begin(), Players.end());
        printf("%d\n", Players[Players.size()-1]);
        return 0;
    }

    else
    {
        int fixo = Players[0], mutavel = Players[1];
        
        Players.pop_front();
        Players.pop_front();

        while (victory < nVictory)
        {
            if(fixo > mutavel)
            {
                Players.push_back(mutavel);
                mutavel = Players[0];
                Players.pop_front();
                victory++;
            }
            else
            {
                Players.push_back(fixo);
                fixo = mutavel;
                mutavel = Players[0];
                Players.pop_front();
                victory = 1;
            }

        }

        printf("%d\n", fixo);
    }

    

    return 0;
}