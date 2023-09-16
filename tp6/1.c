#include<stdio.h>

void crearVect(int N, int v[]);

int main(){
    int N, x, iguales = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    printf("Ingrese un numero a comparar: ");
    scanf("%d", &x);

    int vector[N];

    crearVect(N, vector);

    for(int i = 0; i < N; i++){
        if(vector[i] == x){
            iguales++;
        }
    }

    printf("La cantidad de elementos iguales a %d es: %d", x, iguales);

    return 0;
}

void crearVect(int N, int v[]){
    int i;
    for(i = 0; i<N; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}