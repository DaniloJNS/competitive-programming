#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main (){
    char palavra[51], temp[51], invtemp[51];
    int i=0,j=0,k,l=0;

    scanf(" %[^\n]", palavra);
    k=strlen(palavra);
    k--;

    while(palavra[i]!='\0'){

        if(tolower(palavra[i])=='a' || tolower(palavra[i])=='e' || tolower(palavra[i])=='i' || tolower(palavra[i])=='o' || tolower(palavra[i])=='u'){
            temp[j]=palavra[i];
            j++;
        }

        if(tolower(palavra[k])=='a' || tolower(palavra[k])=='e' || tolower(palavra[k])=='i' || tolower(palavra[k])=='o' || tolower(palavra[k])=='u'){
            invtemp[l]=palavra[k];
            l++;
        }

        i++;
        k--;
    }

    temp[j]='\0';
    invtemp[l]='\0';

    strcmp(temp,invtemp) == 0 ? printf("S\n") : printf("N\n");

    return 0;
}