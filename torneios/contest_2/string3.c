#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    char nome[110], nome2[51],nome3[51], null[2]=" ", nome_result[110];
    int i,loop,j,k,verificador;
    scanf("%d", &loop);
    while(loop--){

    i=0;
    j=0;
    strcpy(nome, null);
    strcpy(nome2, null);
    strcpy(nome3, null);

    scanf(" %[^\n]", nome);
    getchar();

    while(nome[i] != ' '){
        i++;
    }
    strncat(nome2,nome, i);
    i++;
    while(nome[i] != '\0'){
        nome3[j]=nome[i];
        j++;
        i++;
    }
    nome3[j]='\0';
    i=0;
    while(nome2[i] != '\0'){
        i++;
    }
    i=0;
    j=1;
    k=0;
    verificador=0;
    while(verificador==0){
        if(nome2[j]!='\0'){
        nome_result[i]=nome2[j];
        i++;
        j++;
        }
        if(nome3[k]!='\0'){
        nome_result[i]=nome3[k];
        i++;
        k++;
        }
        if(nome2[j]=='\0' && nome3[k]=='\0'){
            verificador=1;
        }
    }
    nome_result[i]='\0';
    
    printf("%s\n", nome_result);

    }
    return 0 ;
 }