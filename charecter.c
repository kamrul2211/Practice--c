#include<stdio.h>

int main (){
    // char ca = 'A';
    // printf("%c",ca);
    int num1, num3, value;
    char sign;
    printf("Enter the number of first:");
    scanf("%d",&num1);
    printf("Enter the number of Second :");
    scanf("%d",&num3);
    sign = '+';
    value = num1 + num3;
    printf("%d %c %d = %d \n", num1, sign, num3, value);

    value = num1 - num3;
    sign = '-';
    printf("%d %c %d = %d \n", num1,sign,num3, value);

    value = num1 * num3;
    sign = 'x' ;
    printf("%d %c %d = %d\n", num1, sign, num3, value);

    value = num1 / num3;
    sign = '%' ;
    printf("%d %c %d = %d\n", num1, sign, num3, value);


}