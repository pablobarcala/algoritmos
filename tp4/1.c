#include<stdio.h>

int main() {
    int a, b, c, suma;

    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    suma = a+b+c;

    printf("La suma de los tres numeros es: %d", suma);

    return 0;
}