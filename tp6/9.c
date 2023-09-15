#include<stdio.h>

void cargarVect(int N, int v[]);
void mostrarVect(int N, int v[]);

int main() {
    int N, x, z, i = 0;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int vector[N];
    cargarVect(N, vector);

    while(i<N){
        printf("Ingrese una posicion: ");
        scanf("%d", &x);
        if(x >= 0 && x <= N-1 && vector[x] == 0){
            printf("Ingrese un valor para la posicion %d: ", x);
            scanf("%d", &z);
            vector[x] = z;
            i++;
        } else {
            printf("Error. Posicion incorrecta o ya cargada\n");
        }
    }

    mostrarVect(N, vector);

    return 0;
}

void cargarVect(int N, int v[]){
    int i;
    for(i = 0; i<N; i++){
        v[i] = 0;
    }
}

void mostrarVect(int N, int v[]) {
    int i;
    printf("El vector es: \n");
    for(i = 0; i<N; i++){
        printf("%d\n", v[i]);
    }
}