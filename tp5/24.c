#include<stdio.h>

int main(){
    int N, x, y, puntaje = 0, promedio = 0, i = 1;

    printf("Ingrese la cantidad de tiros: ");
    scanf("%d", &N);

    while(i<=N){
        printf("\nIngrese el valor x de la coordenada: ");
        scanf("%d", &x);
        printf("\nIngrese el valor y de la coordenada: ");
        scanf("%d", &y);

        if(x >= -1 && x <= 1 && y >= -1 && y <= 1) {
            puntaje += 4;
        } else if(x >= -2 && x <= 2 && y >= -2 && y <= 2) {
            puntaje += 3;
        } else if(x >= -3 && x <= 3 && y >= -3 && y <= 3) {
            puntaje += 2;
        } else if(x >= -4 && x <= 4 && y >= -4 && y <= 4) {
            puntaje += 1;
        }

        i++;
    }

    promedio = puntaje / N;

    printf("El puntaje obtenido es: %d\nTu promedio: %d", puntaje, promedio);

    return 0;
}