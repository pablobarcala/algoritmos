#include<stdio.h>

int main(){
    int lado1, lado2, lado3;

    printf("Ingrese 3 lados de un triangulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if(lado1*lado1 == lado2*lado2 + lado3*lado3){
        printf("Es un triangulo rectangulo");
    } else if(lado2*lado2 == lado1*lado1 + lado3*lado3){
        printf("Es un triangulo rectangulo");
    } else if(lado3*lado3 == lado2*lado2 + lado1*lado1){
        printf("Es un triangulo rectangulo");
    } else {
        printf("No es un triangulo rectangulo");
    }

    return 0;
}