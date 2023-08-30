#include<stdio.h>

int main(){
    int N, i = 1, X, Y, puntaje = 0;

    printf("Ingrese la cantidad de tiros:\n");
    scanf("%d", &N);

    while(i <= N){
        printf("Ingrese la x de la coordenada %d:", i);
        scanf("%d", &X);
        printf("Ingrese la y de la coordenada %d:", i);
        scanf("%d", &Y);

        if(X >= -1 && X <= 1 && Y >= -1 && Y <= 1) {
            puntaje += 3;
        } else if(X >= -2 && X <= 2 && Y >= -2 && Y <= 2) {
            puntaje += 2;
        } else if(X >= -3 && X <= 3 && Y >= -3 && Y <= 3) {
            puntaje += 1;
        }

        i++;
    }

    printf("El puntaje total es: %d", puntaje);

    return 0;
}