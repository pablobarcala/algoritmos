#include<stdio.h>

void cargarVect(int N, int v[]);
void mostrarVect(int N, int v[]);

int main(){
    int N;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int vector[N];
    cargarVect(N, vector);
    mostrarVect(N, vector);

    int i = 0, j = N - 1, z;
    while(i<j){
        z = vector[i];
        vector[i] = vector[j];
        vector[j] = z;
        i++;
        j--;
    }

    mostrarVect(N, vector);

    return 0;
}

void cargarVect(int N, int v[]){
    int i;
    for(i = 0; i<N; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}

void mostrarVect(int N, int v[]){
    int i;
    printf("El vector es: \n");
    for(i = 0; i<N; i++){
        printf("%d\n", v[i]);
    }
}