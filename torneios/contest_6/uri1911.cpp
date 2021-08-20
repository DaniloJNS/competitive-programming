#include <iostream>
#include <stdio.h>
#include <map>
#include <utility>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        map<string, string> origAss;
        string name, assinatura;
        map<string, string>::iterator t1;
        int numAluno, assFalse = 0;

        cin >> numAluno;
        if(numAluno == 0)
            return 0;
        
        while (numAluno--)
        {
            cin >> name >> assinatura;
            origAss.insert(make_pair(name,assinatura));
        }

        int numAula;
        cin >> numAula;

        while (numAula--)
        {
            int count = -2;

            cin >> name >> assinatura;

            t1 = origAss.find(name);
            if(t1->second == assinatura)
                continue;
            else
            {
                for (size_t i = 0; i < t1->second.length(); i++)
                {
                    if(t1->second[i] != assinatura[i])
                    {
                        count++;
                        if(count == 0)
                        {
                            assFalse++;
                            break;
                        }
                    }
                }
            }
        }
        printf("%d\n", assFalse);
    }
    
}