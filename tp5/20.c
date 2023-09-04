#include<stdio.h>

int main(){
    int L, N, suma = 0, i = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &L);

    while(i<=L){
        suma += i;

        if(suma <= L){
            N = i;
        }

        i++;
    }

    printf("El valor de N en 1 + 2 +...+ N <= %d es: %d", L,N);

    return 0;
}