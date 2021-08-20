#include <bits/stdc++.h>

using namespace std;

bool ordenar (unsigned long int A , unsigned long int B){

    if(A < B)
        return true;
    else
    return false;

}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned long int nCases;

    cin >> nCases;

    while(nCases--)
    {
        unsigned long int nPlayers;

        cin >> nPlayers;

        vector<unsigned long int> players(nPlayers);       

        for(unsigned long int i = 0; i < nPlayers; i++)
            cin >> players[i];
        
        vector<unsigned long int> playersQ(players);

        sort(playersQ.begin(), playersQ.end());

        unsigned int sum = 0, quote = 0, nWinners = 0;

        for(unsigned long int i = 0; i < nPlayers-1; i++)
        {                   
            sum += players[i];

            if(players[i+1] > sum)
            {
                quote = players[i+1];
                nWinners = i+1;
            }
        }

        printf("%d\n", nPlayers - nWinners);

        for(unsigned long int i = 0; i < nPlayers; i++)
            if(playersQ[i]>=quote)
                printf("%lu ", i+1);

        printf("\n");

        players.clear();
        playersQ.clear();
    }


    return 0;
}