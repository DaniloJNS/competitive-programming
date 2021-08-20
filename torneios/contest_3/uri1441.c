#include <stdio.h>
#include <inttypes.h>

#define true 1

int main()
{
    int number;
    int i[500], j=0;

    while (true)
    {
        scanf("%d", &number);

        if(number == 0)
            break;
    
        i[j]=number;


        if(number != 1 && number != 2)
        {
            while (number!=1)
            {
                if(number%2==0)
                    number/=2;

                else
                    number=number*3+1;
            
                if(number>i[j])
                    i[j]=number;
            }
        }
        else
            i[j]=number;
        j++;
        
    }
    
    for (int k = 0; j < k; j++)
    {
        printf("%d\n", i[j]);
    }
    
    
    
}