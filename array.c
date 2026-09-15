#include <stdio.h>

int main()
{

    double A, B, C, pi, triangle, circle, trapezium, square, rectangle;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangle = 1 / 2 * (A * B);
    printf("TRIANGULO: %0.3lf\n", triangle);
    pi = 3.14159;
    circle = pi * C * C;
    printf("CIRCULO: %0.3lf\n", circle);

    trapezium = 1 / 2 * (A + B) * C;
    printf("TRAPEZIO: %0.3lf\n", trapezium);

    square = B * B;
    printf("QUADRADO: %0.3lf\n", square);
    rectangle = A * B;
    printf("RETANGULO: %0.3lf\n", rectangle);

    return 0;
}
