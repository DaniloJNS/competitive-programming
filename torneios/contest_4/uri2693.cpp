#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::swap;

struct dadosAlunos
{
    char sentido, nomeAluno[30];
    int distancia;
};

#define loop 1
typedef struct dadosAlunos TpdadosAlunos;


bool ordenar (TpdadosAlunos AinputDados,TpdadosAlunos BinputDados) 
{
    if(AinputDados.distancia>BinputDados.distancia)
        return false;
    else if(AinputDados.distancia == BinputDados.distancia)
    {
        if(AinputDados.sentido > BinputDados.sentido)
            return false;
        else if (AinputDados.sentido == BinputDados.sentido)
        {
            if(AinputDados.nomeAluno > BinputDados.nomeAluno)
                return false;
        }  
    }
    return true;
}



int main()
{
    int casos,k;

    while (scanf("%d", &casos) != EOF)
    {

        vector<TpdadosAlunos> alunoVector;

        TpdadosAlunos inputDados;

        while (casos--)
        {
            cin >> inputDados.nomeAluno >> inputDados.sentido >> inputDados.distancia;

            alunoVector.push_back(inputDados);
        }
        for(unsigned int i = 0; i < alunoVector.size()-1; i++)
            for (unsigned j = 0; j < alunoVector.size()-1; j++)
                if(ordenar(alunoVector[j],alunoVector[j+1]) == false)
                    swap(alunoVector[j],alunoVector[j+1]);

        for (unsigned int i = 0; i < alunoVector.size(); i++)
            cout<<alunoVector[i].nomeAluno<<"\n";
      
    }
    return 0;

}



