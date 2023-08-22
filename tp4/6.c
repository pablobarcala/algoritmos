#include<stdio.h>

int main(){
    int lado1, lado2, perimetro, superficie;

    printf("Ingrese dos lados de un rectangulo: ");
    scanf("%d %d", &lado1, &lado2);

    perimetro = 2*lado1 + 2*lado2;
    superficie = lado1*lado2;

    printf("El perimetro es %d y la superficie es %d", perimetro, superficie);

    return 0;
}