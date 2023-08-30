#include<stdio.h>

int main(){
    int numero, numero_invertido = 0, ultimo, auxiliar;

    printf("Ingrese un numero de al menos 4 digitos:\n");
    scanf("%d", &numero);

    auxiliar = numero;

    while(numero > 0){
        ultimo = numero % 10;
        numero_invertido = numero_invertido * 10 + ultimo;
        numero = numero / 10;
    }

    printf("El numero original: %d, el numero invertido: %d", auxiliar, numero_invertido);

    return 0;
}