#include<stdio.h>

int main(){
    int N,
        i = 1,
        X,
        Y, 
        n_origen = 0,
        n_x = 0,
        n_y = 0,
        n_cuadrante1 = 0,
        n_cuadrante2 = 0,
        n_cuadrante3 = 0,
        n_cuadrante4 = 0;

    printf("Ingrese la cantidad de coordenadas:\n");
    scanf("%d", &N);

    while(i <= N){
        printf("Ingrese el valor x de la coordenada %d:\n", i);
        scanf("%d", &X);
        printf("Ingrese el valor y de la coordenada %d:\n", i);
        scanf("%d", &Y);
        if(X == 0 && Y == 0){
            n_origen++;
        } else if(X == 0){
            n_y++;
        } else if(Y == 0){
            n_x++;
        } else if(X > 0 && Y > 0){
            n_cuadrante1++;
        } else if(X < 0 && Y < 0){
            n_cuadrante3++;
        } else if(X < 0){
            n_cuadrante2++;
        } else {
            n_cuadrante4++;
        }

        i++;
    }

    printf("En el origen: %d en el eje x: %d en el eje y: %d en cuadrante 1: %d en cuadrante 2: %d en cuadrante 3: %d en cuadrante 4: %d", n_origen, n_x, n_y, n_cuadrante1, n_cuadrante2, n_cuadrante3, n_cuadrante4);

    return 0;
}