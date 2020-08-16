#include<stdio.h>
#include <math.h>
#include<conio.h>


#define F(x,y)  (y)-pow(x, 2)+1

int main()
{
    double y0, x0, y1, n, h, f, k1, k2, k3, k4;
    printf("METODO DE RANGE KUTTA\n\n");
    printf("\nDigite o valor de x0: ");
    scanf_s("%lf", &x0);
    printf("\nDigite o valor de y0: ");
    scanf_s("%lf", &y0);
    printf("\nDigite o valor de h: ");
    scanf_s("%lf", &h);
    printf("\nDigite o valor de xn: ");
    scanf_s("%lf", &n);
    for (; x0 < n; x0 = x0)
    {
        k1 = F(x0, y0);
        k2 = F(x0 + h / 2, y0 + h * k1 / 2);
        k3 = F(x0 + h / 2, y0 + h * k2 / 2);
        k4 = F(x0 + h, y0 + h * k3);
        y1 = y0 + h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        printf("\n\n  y(%.4lf) = %.3lf ", x0, y0);
        y0 = y1;
        x0 = x0 + h;
    }
    
}
