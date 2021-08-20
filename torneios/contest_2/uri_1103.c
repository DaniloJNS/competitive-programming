#include <stdio.h>


int main(){
    int H1,M1,H2,M2,HS,MS, teste;
    do{
    scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
    if(H1>=H2){
        HS=H2-H1+24;
        if(M1>M2){
        MS=M2-M1+60;
        HS-=1;
        }
        else{
            MS=M2-M1;
            if(H1==H2){
            HS=0;
            }
        }
     } 
     else{
         HS=H2-H1;
           if(M1>M2){
        MS=M2-M1+60;
        HS-=1;
        }
        else{
            MS=M2-M1;
        }
     }
    teste = H1 + H2 + M2 + M1;
     if(teste!=0){
        printf("%d\n", HS*60+MS);
     }

    } while(teste != 0);
}