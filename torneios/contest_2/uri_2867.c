#include <stdio.h>
#include <math.h>

int main(){
    unsigned n, m;
    int loop;
    scanf("%d", &loop);
    while(loop--)
    {
        scanf("%d %d", &n, &m);
        printf("%.0f\n", (floor(log10(pow(n, m)))) + 1);
    }
}