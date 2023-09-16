#include<stdio.h>

void cargarVect(int N, int v[], int orden);
void mostrarVect(int orden, int v[]);

int main(){
    int N, auxiliar, orden = 0;

    printf("Ingrese un numero entero de al menos 4 digitos: ");
    scanf("%d",&N);

    auxiliar = N;
    while(auxiliar>0){
        auxiliar /= 10;
        orden++;
    }

    int vector[orden];
    cargarVect(N, vector, orden);
    mostrarVect(orden, vector);

    return 0;
}

void cargarVect(int N, int v[], int orden){
    int i, digito;
    for(i = orden - 1; i >= 0; i--){
        digito = N % 10;
        v[i] = digito;
        N /= 10;
    }
}

void mostrarVect(int orden, int v[]){
    int i;
    printf("El vector de orden %d es: \n", orden);
    for(i = 0; i < orden; i++){
        printf("%d\n", v[i]);
    }
}