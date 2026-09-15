// #include <stdio.h>
// int main (){
//     double num1 , num2;
//     printf("Enter the number one:");
//     scanf("%lf", &num1);
//     printf("Enter the number second:");
//     scanf("%lf", num2);

//     printf("%lf + %lf = %lf \n",num1, num2,num1+num2 );
//     printf("%lf - %lf = %lf \n",num1, num2,num1-num2 );
//     printf("%lf * %lf = %lf \n",num1, num2,num1*num2 );
//     printf("%lf / %lf = %lf \n",num1, num2,num1/num2 );
//     double a,b,sum;
//     a=45.23;
//     b= 36.45;
//     sum = a+b;
//     printf("Sum is : %lf\n",sum);
//     printf("Sum is : %0.3f\n",sum);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {

//     int A, B, X;
//     scanf("%d", &A);
//     scanf("%d", &B);
//     X = A + B;
//     printf("X = %d", X);

//     return 0;
// }
#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            
            printf("%d\n", i);
        }
    }
    return 0;
}