#include<stdio.h>

int main(){
    int x, y, x1, y1, x2, y2, z1, z2, M, Mx, My;

    printf("Ingrese los valores de la ecuacion 1: (valores que acompañan a x e y, ademas del resultado)");
    scanf("%d %d %d", &x1, &y1, &z1);
    printf("Ingrese los valores de la ecuacion 2: (valores que acompañan a x e y, ademas del resultado)");
    scanf("%d %d %d", &x2, &y2, &z2);

    M = (x1*y2)-(x2*y1);
    Mx = (z1*y2) - (z2*y1);
    My = (x1*z2) - (x2*z1);

    x = Mx/M;
    y = My/M;

    printf("La incognita X es %d, la Y es %d", x, y);

    return 0;
}