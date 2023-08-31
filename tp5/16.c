#include<stdio.h>

int main(){
    int x, i = 1;

    printf("Ingrese un numero de 4 digitos:\n");
    scanf("%d",&x);

    while(i<=x){
        if(x%i==0){
            printf("%d es divisor de %d\n", i, x);
        }
        i++;
    }

    return 0;
}