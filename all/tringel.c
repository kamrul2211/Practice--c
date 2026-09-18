#include<stdio.h>
double tringle_area(double c ,double r){
    double area = c*r*r;
    return area;
    
}
int mian (){
    double a = 3.14159;
    double b =4.5;
    
    double c = tringle_area(a,b*b);
    printf("%lf",c);
    return 0;
}