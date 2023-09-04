#include<stdio.h>

int main(){
    int N, factorial = 1, i = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &N);

    while(i<=N){
        factorial *= i;
        printf("%d * ", i);
        i++;
    }

    printf("El resultado de %d factorial: %d", N, factorial);

    return 0;
}