#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int loop=1, i, j, k, verificador=0, quebra, nova;
    char temp[6], null[2]=" ";
    
    while(loop!=0){

    scanf("%d", &loop);

    if(loop==0){
        return 0;
    }

    char numero[loop*3];
    int num[loop+1];

    strcpy(numero,null);

    scanf(" %[^\n]", numero);
    getchar();
    
    i=strlen(numero);
    printf("\n\n i = %d \n\n", i);
    i=0;
    k=0;
    verificador=0;

    while(numero[i]!='\0'){

        j=0;
        strcpy(temp,null);

        while(numero[i]!=' ' && numero[i]!='\0'){

            if(numero[i]!='\0'){
                temp[j]=numero[i];
                i++;
                j++;
            }

            /*else{
                verificador=1;
                break;
            }*/

        }

        temp[j]='\0';
        num[k]=atoi(temp);
        printf("num[%d] = %d | ", k , num[k]);

        i++;
        k++;
        
        if(verificador==1){
            break;
        }

    }/*while conversor de string*/
    loop=k;
    printf("\n\n  k = %d  \n\n", k);
    num[k-1]=num[0];
    k=0;
    quebra=0;
    nova=0;
    while(k<=loop){
        if(num[k]==0){
            quebra+=2;
            if(quebra>=4){
                nova++;
                quebra-=4;
                num[k]=1;
            }
        }
        else if(num[k]==1){
            quebra=0;
        }
        k++;
    }
    k=0;
    if(num[k]==0){
            quebra = quebra + 2;
            if(quebra>=4){
                nova++;
                quebra-=4;
                num[k]=1;
            }
        }
    printf("%d\n", nova);

    /*k=0;
    quebra=0;
    nova=0;
    while(k<=loop){
        if(num[k]==0){
            quebra+=2;
            if(quebra>=4){
                nova++;
                quebra-=4;
            }
        }
        else if(num[k]==1){
            quebra=0;
        }
        k++;
    }
    k=0;
    if(num[k]==0){
            quebra = quebra + 2;
            if(quebra>=4){
                nova++;
                quebra-=4;
                num[k]=1;
            }
        }
        printf("\n resultado2 = %d\n", nova);*/
    }
}