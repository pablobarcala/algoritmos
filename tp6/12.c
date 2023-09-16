#include<stdio.h>

void cargarVect(int N, int v[]);
void cargarVectParImpar(int N, int v[], int vPar[], int vImpar[]);
void mostrarVect(int N, int v[]);

int main(){
    int N, ordenPar = 0, ordenImpar = 0;

    printf("Ingrese una cantidad par de numeros: ");
    scanf("%d",&N);

    int vector[N];
    cargarVect(N, vector);

    for(int i = 0; i < N; i++){
        if(i % 2 == 0){
            ordenPar++;
        } else {
            ordenImpar++;
        }
    }

    int vectPar[ordenPar], vectImpar[ordenImpar];
    cargarVectParImpar(N,vector,vectPar,vectImpar);

    printf("El vector es: \n");
    mostrarVect(N, vector);
    printf("El vector Par es: \n");
    mostrarVect(ordenPar, vectPar);
    printf("El vector Impar es: \n");
    mostrarVect(ordenImpar, vectImpar);

    return 0;
}

void cargarVect(int N, int v[]){
    int i;
    for(i=0; i<N; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}

void cargarVectParImpar(int N, int v[], int vPar[], int vImpar[]){
    int i, j = 0, t = 0;
    for(i=0; i<N; i++){
        if(i % 2 == 0){
            vPar[j] = v[i];
            j++;
        } else {
            vImpar[t] = v[i];
            t++;
        }
    }
}

void mostrarVect(int N, int v[]){
    int i;
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }
}