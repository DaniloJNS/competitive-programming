#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long int min=0, num=0;
    int nCases;
    vector<long long int> pilha;
    string entrada;

    cin >> nCases;
    nCases++;

    while (nCases--)
    {
        getline(cin, entrada);
        int pos = entrada.find_first_of(" ");

        if(entrada.length()>4)
           num = stoi(entrada.substr(pos+1));

        if(entrada.substr(0,pos)=="PUSH")
            pilha.push_back(num);

        else if(entrada.substr(0,pos)=="MIN")
        {
            vector<long long int> copy(pilha);
            sort(copy.begin(), copy.end());
            cout<<copy[0]<<endl;
        }
        else if(entrada.substr(0,pos)=="POP")
            pilha.pop_back();
    }
    
}