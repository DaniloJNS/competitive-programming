#include <stdio.h>
#include <string.h>

#define true 1


struct Dataname
{
    char Alunos[100][100];
    int position;
};

typedef struct Dataname Tpmame;

Tpmame nameYes[20], nameNo[20];

int main(){
    char reposta[4], nome[30];
    int QtdNome[20], indicador, contador;

    while (true)
    {
        scanf("%[^\n]s %[^\n]s", &nome, &reposta);

        QtdNome[strlen(nome)]++;

        if(strcmp(reposta,"YES") == 0 )
        {
            QtdNome[strlen(nome)]++;

            for (int i = QtdNome[strlen(nome)]; i >=0; i--)
            {
                indicador = strcmp( nameYes[ strlen(nome) ].Alunos[i], nome)
                if(indicador < 0 || indicador==0)
            }
            

            for (int i = QtdNome[strlen(nome)]; i >= 1; i--)
            {
                indicador = strcmp( nameYes[ strlen(nome) ].Alunos[i], nome)
                
                if(indicador > 0)
                    strcpy(nameYes[ strlen(nome) ].Alunos[i+1], nameYes[ strlen(nome) ].Alunos[i]);

                else if(indicador < 0)

                    strcpy(nameYes[ strlen(nome) ].Alunos[i+1], nome);

                else if(indicador == 0)
            }
        }
        nameYes[strlen(nome)].Alunos[]

    }






}