#include<stdio.h>

void cargarVect(int M, int v[]);

int main(){
    int M, N = 0, P = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &M);

    int vector[M];
    cargarVect(M, vector);

    for(int i = 0; i < M; i++){
        if(vector[i] < 0) {
            N++;
        } else if(vector[i] > 0){
            P++;
        }
    }

    printf("Cantidad de valores negativos: %d\nCantidad de valores positivos: %d", N, P);

    return 0;
}

void cargarVect(int M, int v[]){
    int i;
    for(i = 0; i < M; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}