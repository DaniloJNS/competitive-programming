#include <stdio.h>



int main(){
    int a=1,b;
    while(a!=0){
    scanf("%d", &a);
    scanf("%d", &b);
    a%=b;
    printf("\n a%= %d\n", a);
    }
    return 0;
}