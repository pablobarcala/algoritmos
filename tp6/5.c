#include<stdio.h>

void cargarVect(int N, int v[]);

int main(){
    int N;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int vector[N];
    cargarVect(N, vector);

    for(int i = 0; i < N; i++){
        printf("%d\n", vector[i]);
    }

    return 0;
}

void cargarVect(int N, int v[]){
    int adicional = 0, i;
    for(i = N-1; i >= 0; i--){
        v[i] = N + adicional;
        adicional++;
    }
}