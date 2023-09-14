#include<stdio.h>

int cargarVect(int N, int v[]);

int main(){
    int N, C, NUMERO = 1;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int X[N];
    cargarVect(N, X);

    printf("Ingrese un valor entero: ");
    scanf("%d", &C);

    for(int i = 0; i < N; i++){
        NUMERO *= X[i] - C;
    }

    printf("El valor de NUMERO es %d", NUMERO);

    return 0;
}

int cargarVect(int N, int v[]){
    int i;
    for(i = 0; i < N; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}