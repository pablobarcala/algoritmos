#include<stdio.h>

int main(){
    int N,
        x,
        y,
        i = 1,
        n_cuadrante1 = 0,
        n_cuadrante2 = 0,
        n_cuadrante3 = 0,
        n_cuadrante4 = 0,
        superficie = 0,
        superficies_negativas = 0,
        superficies_positivas = 0;

    printf("Ingrese la cantidad de coordenadas: ");
    scanf("%d", &N);

    while(i<=N){
        printf("Ingrese el punto x de la coordenada %d: ", i);
        scanf("%d", &x);
        printf("Ingrese el punto y de la coordenada %d: ", i);
        scanf("%d", &y);

        superficie = (x*y)/2;

        if(superficie > 0){
            superficies_positivas++;
        } else {
            superficies_negativas++;
        }

        if(x>0 && y>0){
            n_cuadrante1++;
        } else if(x<0 && y>0){
            n_cuadrante2++;
        } else if(x<0 && y<0){
            n_cuadrante3++;
        } else if(x>0 && y<0){
            n_cuadrante4++;
        }

        i++;
    }

    printf("La cantidad de superficies positivas: %d\nde superficies negativas: %d\nde triangulos en cuadrante 1: %d\nen cuadrante 2: %d\nen cuadrante 3: %d\nen cuadrante 4: %d", superficies_positivas, superficies_negativas, n_cuadrante1, n_cuadrante2, n_cuadrante3, n_cuadrante4);

    return 0;
}