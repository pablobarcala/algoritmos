#include<stdio.h>

void cargarVect(int N, int v[]);

int main(){
    int N;

    printf("Ingresar la cantidad de numeros: ");
    scanf("%d", &N);

    int vector[N]; 
    cargarVect(N, vector);

    for(int i = 0; i < N; i++){
        printf("%d\n", vector[i]);
    }

    return 0;
}

void cargarVect(int N, int v[]) {
    int K, adicional = 1, i;

    printf("Ingrese un valor entero: ");
    scanf("%d", &K);

    for(int i = 0; i < N; i++){
        if(adicional <= K){
            v[i] = K * adicional;
        } else {
            v[i] = adicional;
        }
        adicional++;
    }
}