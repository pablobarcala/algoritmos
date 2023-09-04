#include<stdio.h>

int main(){
    int N1, N2, suma = 0;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &N1);
    printf("Ingrese otro numero positivo, mayor al anterior: ");
    scanf("%d", &N2);

    while(N1<N2-1){
        suma += N1 + 1;
        printf("%d + ", N1 + 1);
        N1++;
    }

    printf("La suma es: %d", suma);

    return 0;
}