#include<stdio.h>

void cargarVect(int N, int v[]);

int main(){
    int N, mayor, posicion;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int vector[N];
    cargarVect(N, vector);

    for(int i = 0; i < N; i++){
        if(i == 0){
            mayor = vector[i];
            posicion = i;
        } else if(vector[i] > mayor){
            mayor = vector[i];
            posicion = i;
        }
    }

    printf("El mayor numero es %d y esta en la posicion %d", mayor, posicion);

    return 0;
}

void cargarVect(int N, int v[]){
    int i;
    for(i = 0; i < N; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}