#include<stdio.h>

int main(){
    int n, x, mayor, menor, i = 1;

    printf("Ingrese la cantidad de numeros:");
    scanf("%d", &n);

    while(i <= n){
        printf("Ingrese un numero");
        scanf("%d", &x);

        if(i == 1){
            mayor = x;
            menor = x;
        } else {
            if(x > mayor){
                mayor = x;
            } else if(x < menor){
                menor = x;
            }
        }
        i++;
    }

    printf("El mayor numero es: %d, el menor es: %d", mayor, menor);

    return 0;
}