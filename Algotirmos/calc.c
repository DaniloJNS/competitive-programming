#include <stdio.h>
#include <math.h>

#define pi 3.14


int main()
{
    float D, H, O, O1, R1, R2;

    printf(" soma(D,H,O,01)= ");

    scanf("%f %f %f %f", &D, &H, &O, &O1);

    R1 = pow((pi*D*H)/2, 2)*pow(O,2);

    R2 = pow((pi*pow(D,2))/4,2)*pow(O1,2);

    printf("R1 = %f\n", R1);
    printf("R2 = %f\n", R2);
    printf("V = %f\n", R1+R2);
    printf("RV = %f\n", sqrt(R1+R2));
    printf("pow = %f\n", pow(2,3));
}