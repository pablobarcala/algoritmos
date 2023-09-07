#include<stdio.h>

int main(){
    int tiro, puntos = 0, n_tiros = 1;

    do {
        printf("Ingrese el valor del tiro: ");
        scanf("%d", &tiro);

        if(tiro % 2 != 0){
            puntos += tiro;
            n_tiros++;
        }
    } while(tiro % 2 != 0);

    printf("El puntaje fue: %d\nLa cantidad de tiros: %d\n", puntos, n_tiros);

    return 0;
}