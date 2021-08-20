#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define true 5

long int num[500][500];

void convertion_string(int columns, int lins_position){
    int j,i,k,verificador;
    char temp[8], null[2]=" ", string_numero[columns*7];

    strcpy(string_numero,null);

    scanf(" %[^\n]", string_numero);
    getchar();


    i=k=verificador=0;

    while(string_numero[i]!='\0'){


        j=0;
        strcpy(temp,null);

        while(string_numero[i]!=' '){

            if(string_numero[i]!='\0'){
                temp[j]=string_numero[i];
                i++;
                j++;
            }

            else{
                verificador=1;
                break;
            }

        }

        temp[j]='\0';
        num[k][lins_position]=atoi(temp);


        i++;
        k++;
        
        if(verificador==1){
            break;
        }
    }
}


int seach_quadrado(int columns, int lins){
    int  tamanho=0, L, U, i, j, col, lin, resultado=0;
    i=j=0;    
    scanf("%d %d", &L, &U);
    while(i<=lins)
    {
        tamanho=0;
            if(resultado>columns+1-j)
            {
                j=0;
                i++;
            }
            if(resultado>lins+1-i) break;
            if(num[j][i]>=L && num[j][i]<=U)
            {
                lin=i+1;
                col=j+1;
                tamanho=1;
                
                while(lin<=lins && col<=columns)
                {
                    if(num[col][lin]<L || num[col][lin]>U) break;
                        
                    else tamanho++;
                        col++;
                        lin++;
                }
                    
            }
            if(num[j][i]>U){
                columns=j;
                j=0;
                i++;
            }

             if(tamanho>resultado) resultado=tamanho;
            j++;
            if(j==columns+1) 
            {
                j=0;
                i++;
            }
    }
        return resultado;
    }

int main(){
    int columns, lins, Q, L , U;
    int i=0, x=0, j=0,lin,col;

    while(true){

    scanf("%d %d", &lins, &columns);

    if(columns==0 && lins==0) return 0;

    columns--;
    lins--;

    for (int i = 0; i <= lins; i++)
    {
        convertion_string(columns,i);
    }
    
             
    scanf("%d", &Q);

    int bigger[Q], x=0;
    Q++;
    
    while(--Q){
        bigger[x]=seach_quadrado(columns, lins);
        printf("%d\n", bigger[x]);
        x++;
    }
    printf("-\n");
}
}