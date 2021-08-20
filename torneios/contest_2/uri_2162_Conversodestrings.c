#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int loop, i, j, k, verificador=0, pico, vale;
    char temp[6], null[2]=" ";

    scanf("%d", &loop);

    char numero[loop*6];
    int num[loop];

    strcpy(numero,null);

    scanf(" %[^\n]", numero);
    getchar();


    i=0;
    k=0;


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
        num[k]=atoi(temp);

        printf("\n num[%d] = %d\n", k, num[k]);

        i++;
        k++;
        
        if(verificador==1){
            break;
        }

    }
    k=0;
    if(num[k+1]>num[k]){
            pico=0;
            vale=1;
        }
        else if(num[k+1]<num[k]){
                pico=1;
                vale=0;        
        }
        if(num[k+1]==num[k]){
            printf("pico-vale0\n");
            return 0;
        }
        k++;
        loop=loop-2;
    while(loop--){
        printf("\n ->loop = %d | k = %d \n", loop, k);
        if(num[k+1]>num[k]){
            if(pico==1 && vale==0){
            pico=0;
            vale=1;
            }
            else{
                 printf("\n pico-loop = 0\n");
                 break;
             }   
        }
        else if(num[k+1]<num[k]){
             if(pico==0 && vale==1){
                pico=1;
                vale=0;        
             }
             else{
                 printf("vale-loop = 0\n");
                 break;
             }   
        }
        if(num[k+1]==num[k]){
            printf("pico-vale-loop = 0\n");
            break;
        }
        k++;
    }
    printf("\n loop = %d\n", loop);
    if(loop==-1){
        printf("\n atende os requisitos\n");
    }
}