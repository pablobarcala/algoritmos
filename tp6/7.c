#include<stdio.h>

void cargarVect(int N, int v[]);

int main(){
    int N;

    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &N);

    int vector[N];
    cargarVect(N, vector);

    printf("El vector es: \n");
    for(int i = 0; i<N; i++){
        printf("%d\n", vector[i]);
    }

    return 0;
}

void cargarVect(int N, int v[]){
    int i, A, B;
    printf("Ingrese dos numeros: \n");
    scanf("%d %d", &A, &B);
    for(i = 0; i<N; i++){
        if(i == 0){
            v[i]=A;
        } else if(i == 1){
            v[i]=B;
        } else if(i % 2 == 0) {
            v[i] = v[i-2] + v[i-1];
        } else if(i % 2 == 1) {
            v[i] = v[i-3] - v[i-2];
        }
    }
}