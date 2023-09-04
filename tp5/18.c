#include<stdio.h>

int main(){
    int N, x, anterior, series = 0, contador_series = 0, i=1;

    printf("Ingrese la cantidad de numeros:\n");
    scanf("%d",&N);

    while(i<=N){
        printf("Ingrese un numero: ");
        scanf("%d",&x);

        if(x > anterior){
            contador_series = 1;
            
            if(i == N) {
                series += contador_series;    
            }
        } else {
            series += contador_series;
            contador_series = 0;
        }

        anterior = x;
        i++;
    }

    printf("Cantidad de series crecientes: %d", series);

    return 0;
}