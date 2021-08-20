#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int loop=1,verificador=0, quebra, nova;
    int i, j, k, count;
    char temp[6], null[2]=" ";
    
    while(loop!=0){

    scanf("%d", &loop);

    if(loop==0) return 0;
    

    char numero[loop*3];
    int num[loop];

    strcpy(numero,null);

    scanf(" %[^\n]", numero);
    getchar();


    i=0;
    k=0;
    verificador=0;
    count=-1;

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

        if(num[k]==1) count=k;


        i++;
        k++;
        
        if(verificador==1) break;
        

    }/*while conversor de string*/

    if(count==-1) printf("%d\n", loop%2+loop/2);
    j=0;
    quebra=0;
    nova=0;
    k=count+1;
    while(j<loop){
        k%=loop;
        if(num[k]==0){
            quebra= quebra + 2;
            if(quebra>=4){
                nova++;
                quebra-=4;
            }
        }
        else{
            quebra=0;
        }
        j++;
        k++;
    }
    printf("%d\n", nova);
    }/*while*/
}