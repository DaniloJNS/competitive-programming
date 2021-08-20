#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

#define true 1

int main()
{
    int numBilhete, numPessoas, clones;


    while(true)
    {
        printf(" start program... \n");
        scanf("%d %d", &numBilhete, &numPessoas);

        if(numBilhete == 0 && numPessoas == 0)
                break;

        int codBilhete[numPessoas], numcodBilhete;

        clones=0;

        for (int i = 0; i < numBilhete; i++)
                codBilhete[i]=0;
        

        for (int i = 0; i < numPessoas; i++)
        {
                scanf("%d", &numcodBilhete);
                codBilhete[numcodBilhete-1]++;
        }

        for (int i = 0; i < numBilhete; i++)
                if(codBilhete[i]>1)
                    clones++;
    

        printf("%d\n", clones);
        printf(" end program... \n-------------\n");    
    }

    return 0;
}