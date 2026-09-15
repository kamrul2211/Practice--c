// #include<stdio.h>
// double add(double n1,double n2){
//     double sum = n1+n2;
//     return sum;
// }
// int main(){
//     double a,b,c;
//     a= 3.7;
//     b=2.8;
//     c=add(a,b);
//     printf("%0.1lf\n",c);
// }

// #include<stdio.h>
// double add(double x,double y);
// int main(){
//     double a=2.7,b=2.8,c;
//     c=add(a,b);
//     printf("%lf\n",c);
//     return 0;

// }
// double add(double n1,double n2){
//     double sum = n1+n2;
//     return sum;
// }
#include<stdio.h>
int test_function(int x,int y){
    y = x;
    x = 2*y;
    printf("%d %d\n",x, y);
    return(x*y);
}
int main(){
    int x=10 ,y=20,z=30;
    z = test_function(x,y);
    printf("%d %d %d\n",x,y,z);
    return 0;

}