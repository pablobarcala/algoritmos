#include<stdio.h>

int main(){
    int N, aux;

    printf("Ingrese un numero positivo:\n");
    scanf("%d",&N);

    aux = N;

    while(aux>1){
        aux -= 2;
    }

    if(aux==1){
        printf("%d es impar", N);
    } else {
        printf("%d es par", N);
    }

    return 0;
}