#include <iostream>
#include <vector>
#include <string.h>

#include <utility>
#include <string>

using namespace std;

struct alunos
{
    vector<string> name;
};
typedef struct alunos Tpalunos;

Tpalunos nameArray;

int main()
{

    
    char other[20];

    scanf("%s", other);

    vector<pair<int, string>> link;

    link.push_back(make_pair(5,"danilo"));

    for ( unsigned int i=0; i < link.size(); i++)
		cout << ' ' << link[i].first  <<' '<< link[i].second;

    string nomes2 (other);

    string nomes ("My name is danilo");


    nameArray.name.push_back(nomes);
    nameArray.name.push_back(nomes2);

    vector<string>::iterator it;

    for ( it =nameArray.name.begin(); it < nameArray.name.end(); it++)
		cout << ' ' << *it;

    return 0;
}