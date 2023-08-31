#include<stdio.h>
#include<math.h>

int main(){
    int decimal, auxiliar, binario = 0, resto = 0, peso = 1;

    printf("Ingrese un numero entero positivo:\n");
    scanf("%d", &decimal);

    auxiliar = decimal;

    while(decimal > 0){
        resto = decimal % 2;
        decimal /= 2;
        binario += resto * peso;
        peso *= 10;
    }

    printf("El numero decimal %d es %d en binario", auxiliar, binario);

    return 0;
}