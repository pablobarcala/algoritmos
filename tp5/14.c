#include<stdio.h>

int main(){
    int numero1, 
        numero2, 
        suma = 10000, 
        ultimo1, 
        ultimo2, 
        peso = 1, 
        adicional = 0, 
        aux1, 
        aux2;

    printf("Ingrese dos numeros binarios de cuatro digitos\n");
    scanf("%d %d",&numero1,&numero2);

    aux1 = numero1;
    aux2 = numero2;

    while(numero1>0){
        ultimo1 = numero1 % 10;
        ultimo2 = numero2 % 10;

        suma += ((ultimo1 + ultimo2 + adicional) % 2) * peso;

        if(ultimo1 + ultimo2 + adicional >= 2){
            adicional = 1;
        } else {
            adicional = 0;
        }

        peso *= 10;
        numero1 /= 10;
        numero2 /= 10;
    }

    printf("La suma entre %d y %d es = %d", aux1, aux2, suma);

    return 0;
}