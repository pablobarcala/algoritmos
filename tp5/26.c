#include<stdio.h>

int main(){
    int pago_rico = 0, pago_pobre = 0, duplicador = 1, i = 1, dia = 0;

    while(i<=30){
        pago_pobre += 100;
        pago_rico += duplicador;

        if(pago_rico > pago_pobre && dia == 0){
            dia = i;
        }

        duplicador *= 2;

        i++;
    }

    printf("La cantidad entregada por el pobre: %d\nLa cantidad entregada por el rico: %d\nEl rico le dio mas dinero al pobre desde el dia %d", pago_pobre, pago_rico, dia);

    return 0;
}