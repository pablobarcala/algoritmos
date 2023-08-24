#include<stdio.h>

int main(){
    int n, x, i = 1, suma = 0;
    float promedio;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("Ingrese un numero:");
        scanf("%d", &x);

        suma += x;
        i++;
    }

    promedio = suma/n;

    printf("El promedio de los numeros es: %f", promedio);
    
    return 0;
}