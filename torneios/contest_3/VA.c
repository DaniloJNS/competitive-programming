#include <stdio.h>


int main()
{
    long int n, m , a, soma, add;

    scanf("%ld %ld %ld", &n, &m, &a);

    soma=n/a;
    if(n%a>0)
        soma++;

    add = m /a;
    if(m%a>0)
        add++;
    
    soma*=add;

    printf("%ld\n", soma);

    return 0; 
}