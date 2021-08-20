#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define true 1

int main(){

    int columns, lins;
    int Q , L, U,i=0, x=0, j=0,lin,col, k, l, verificador=0;

    char temp[20], null[2]=" ";

    while(true){

    scanf("%d %d", &lins, &columns);

    if(columns==0 && lins==0) return 0;

    int num[columns][lins];

    columns--;
    lins--;
    char numero[columns*7];
    l=0;

    while(l<=lins){

    strcpy(numero,null);

    scanf(" %[^\n]", numero);
    getchar();


    i=k=verificador=0;

    while(numero[i]!='\0'){

        j=0;
        strcpy(temp,null);

        while(numero[i]!=' '){

            if(numero[i]!='\0'){
                temp[j]=numero[i];
                i++;
                j++;
            }

            else{
                verificador=1;
                break;
            }

        }

        temp[j]='\0';
        num[k][l]=atoi(temp);


        i++;
        k++;
        
        if(verificador==1){
            break;
        }
    }
    l++;
    }/*while*/

             
    scanf("%d", &Q);

    int big[Q], tamanho=0, limite;

    Q++;
    limite=columns;

    while(--Q){

    big[x]=0;
    i=j=0;    
    
    scanf("%d %d", &L, &U);
    while(i<=lins){
            tamanho=0;

            if(big[x]>columns+1-j)
            {
                j=0;
                i++;
            }

            if(big[x]>lins+1-i) break;

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

             if(tamanho>big[x]) big[x]=tamanho;

             if(num[j][i]>U)
             {
                 limite=j;
                 j=0;
                 i++;
             }
            j++;
            if(j==limite+1)
            {
                j=0;
                i++;}
            }
    
    printf("%d\n", big[x]);
    x++;

    }
    printf("-\n");
    }

}