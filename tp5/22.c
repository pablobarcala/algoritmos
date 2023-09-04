#include<stdio.h>

int main(){
    int N, M, x, y, i = 1, n_lados = 0, n_diagonal = 0, n_triangulo_superior = 0, n_triangulo_inferior = 0;

    printf("Ingrese el punto M del segmento (0,0) (M,M): ");
    scanf("%d", &M);
    printf("Ingrese la cantidad de coordenadas: ");
    scanf("%d", &N);

    while(i<=N){
        printf("Ingrese el punto x de la coordenada %d: ", i);
        scanf("%d", &x);
        printf("Ingrese el punto y de la coordenada %d: ", i);
        scanf("%d", &y);

        if(x == 0 || y == 0 || x == M || y == M){
            n_lados++;
        } else if(x == y){
            n_diagonal++;
        } else if(y > x){
            n_triangulo_superior++;
        } else if(y < x){
            n_triangulo_inferior++;
        }

        i++;
    }

    printf("Cantidad de puntos en los lados: %d \nen la diagonal: %d \nen el triangulo superior: %d \nen el triangulo inferior: %d", n_lados, n_diagonal, n_triangulo_superior, n_triangulo_inferior);

    return 0;
}