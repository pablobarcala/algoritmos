#include<stdio.h>

// Ingresar dos números enteros positivos N1y N2, con N1 < N2 y un número x cualquiera, 
// presentar por pantalla los múltiplos de x comprendidos entre N1 y N2.

int main(){
    int N1, N2, x;

    printf("Ingrese dos numeros enteros positivos, con el primero menor al segundo:\n");
    scanf("%d %d",&N1, &N2);

    printf("\nIngrese otro numero para comprobar sus multiplos:\n");
    scanf("%d", &x);

    while(N1<=N2){
        if(N1 % x == 0){
            printf("%d es multiplo de %d\n", N1, x);
        }
        N1++;
    }

    return 0;
}