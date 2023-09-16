#include<stdio.h>

void cargarVect(int N, int v[]);
void cargarVectW(int N, int vV[], int vW[]);
void mostrarVect(int N, int v[]);

int main(){
    int N, ceros = 0;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d",&N);

    int vectorV[N];
    cargarVect(N,vectorV);

    for(int i=0; i<N; i++){
        if(vectorV[i] == 0){
            ceros++;
        }
    }

    int vectorW[ceros];
    cargarVectW(N, vectorV, vectorW);

    mostrarVect(N, vectorV);
    mostrarVect(ceros, vectorW);

    return 0;
}

void cargarVect(int N, int v[]){
    int i;
    for(i=0; i<N; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &v[i]);
    }
}

void cargarVectW(int N, int vV[], int vW[]){
    int i, j = 0;
    for(i=0; i<N; i++){
        if(vV[i] == 0){
            vW[j] = i;
            j++;
        }
    }
}

void mostrarVect(int N, int v[]){
    int i;
    printf("El vector es: \n");
    for(i=0; i<N; i++){
        printf("%d\n", v[i]);
    }
}