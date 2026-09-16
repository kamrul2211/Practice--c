#include <stdio.h>
#include <math.h>

int main()
{

    double A, B, C, D, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);
    D = (B * B) - (4*A * C);
    if (D > 0)
    {
        R1 = (-B + sqrt(D)) / 2 * A;
        R2 = (-B - sqrt(D)) / 2 * A;
        printf("R1 = %0.5lf\n", R1);
        printf("R2 = %0.5lf\n", R2);
    }
    else if (D == 0)
    {
        R1 = R2 = -B / (2 * A);
        printf("%0.5lf %0.5lf\n",R1,R2);
    }
    else
    {
        printf("Impossivel calcular ");
    } 
    return 0;
}