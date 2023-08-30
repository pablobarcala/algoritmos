#include<stdio.h>

int main(){
    int n, x, y, i=1, Y1 = 2/3*x-2;

    printf("Ingrese la cantidad de coordenadas: ");
    scanf("%d", &n);

    while(i<=n){
        printf("Ingrese el valor x de la coordenada: ");
        scanf("%d", &x);
        printf("Ingrese el valor y de la coordenada: ");
        scanf("%d", &y);

        if(y > Y1){
            printf("Punto por encima de la recta: (%d,%d)\n", x,y);
        } else if(y < Y1){
            printf("Punto por debajo de la recta: (%d,%d)\n", x,y);
        } else if(y == Y1){
            printf("Punto sobre la recta: (%d,%d)\n", x,y);
        }

        i++;
    }

    return 0;
}