#include <iostream>
#include <stdio.h>
#include <map>
#include <utility>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, pair<int,pair<int,int>>>& T1,
    pair<string, pair<int,pair<int,int>>>& T2){

        if(T1.second.first > T2.second.first)
            return true;

        else if(T1.second.first == T2.second.first)
        {
            if(T1.second.second.first > T2.second.second.first)
                return true;

            else if(T1.second.second.first == T2.second.second.first)
            {
                if(T1.second.second.second > T2.second.second.second)
                    return true;

                else if(T1.second.second.second == T2.second.second.second)
                {

                    if(T1.first < T2.first)
                        return true;
                    else
                        return false;
                }
                return false;
            }
            return false;
        }
        return false;
}

void ordenar(map<string, pair<int, pair<int,int>>>& country) {

    vector<pair<string, pair<int, pair<int,int>>>> countryCopy;

    for (auto& it : country) 
        countryCopy.push_back(it);

    sort(countryCopy.begin(), countryCopy.end(), cmp);
    
    cout<<"Quadro de Medalhas"<<endl;

    for (size_t i =0; i<countryCopy.size() ; i++)
        cout << countryCopy[i].first << " " <<  countryCopy[i].second.first << " " <<  countryCopy[i].second.second.first << " " <<  countryCopy[i].second.second.second << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    map<string, pair<int,pair<int,int>>> country;

    string modalidade;

    while (getline(cin,modalidade))
    {
        string ouro, prata, bronze;

        getline(cin,ouro);
        getline(cin,prata);
        getline(cin,bronze);

        if(country.count(ouro) == 1)
            country[ouro].first++;
        else
            country.insert( make_pair(ouro, make_pair(1,make_pair(0,0))));

        if(country.count(prata) == 1)
            country[prata].second.first++;
        else
            country.insert( make_pair(prata, make_pair(0,make_pair(1,0))));
        
        if(country.count(bronze) == 1)
            country[bronze].second.second++;
        else
            country.insert( make_pair(bronze, make_pair(0,make_pair(0,1))));
    }

    ordenar(country);
}