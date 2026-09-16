#include<stdio.h>
int main(){
    double loan_amount,interest_amount,numbers_of_year,total_amount,monthly_amount;
    scanf("%lf %lf %lf",&loan_amount,&interest_amount,&numbers_of_year);
    total_amount = loan_amount + (loan_amount*35*5)/100;
    monthly_amount= total_amount / (numbers_of_year*12);
    printf("Total Amount is : %lf\n",total_amount);
    printf("Mounthly Amount : %lf\n",monthly_amount);
    return 0;
}