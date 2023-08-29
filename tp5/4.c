#include<stdio.h>

int main(){
    int n, x, i = 1, n_positivos = 0, n_negativos = 0, n_ceros = 0;

    printf("Ingrese la cantidad de numeros:");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &x);

        if(x > 0){
            n_positivos++;
        } else if(x < 0){
            n_negativos++;
        } else {
            n_ceros++;
        }

        i++;
    }

    printf("Positivos %d, negativos %d, ceros %d", n_positivos, n_negativos, n_ceros);

    return 0;
}