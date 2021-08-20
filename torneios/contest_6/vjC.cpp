#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int entrada, nTeste;
    vector<long long int> fila;
    cin >> nTeste;
    while(nTeste--) {
        while (true)
        {
            cin >> entrada;

            if(entrada == 0)
                break;

            else if(entrada == -1 && fila.size() != 0)
            {
                sort(fila.begin(),fila.end());
                if(fila.size()%2 == 0)
                {
                    cout<<fila[(fila.size()/2)-1]<<endl;
                    fila.erase(fila.begin()+(fila.size()/2)-1);
                }
                else
                {
                    cout<<fila[((fila.size()+1)/2)-1]<<endl;
                    fila.erase(fila.begin()+((fila.size()+1)/2)-1);
                }

                continue;
            }
            if(entrada>=0)
            fila.push_back(entrada);
        }
    }

    
    
}