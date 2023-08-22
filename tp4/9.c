#include<stdio.h>

int main(){
    int x1, y1, x2, y2, lado1, lado2, perimetro, superficie;

    printf("Ingrese el valor x e y del vertice inferior izquierdo: ");
    scanf("%d %d", &x1, &y1);
    printf("Ingrese el valor x e y del vertice superior derecho: ");
    scanf("%d %d", &x2, &y2);

    lado1 = x2-x1;
    lado2 = y2-y1;

    perimetro = 2*lado1 + 2*lado2;
    superficie = lado1*lado2;

    printf("La superficie del rectangulo es: %d y el perimetro es: %d", superficie, perimetro);

    return 0;
}