#include<stdio.h>
#include<math.h>

int main(){
    int binario, ultimo, decimal = 0, i = 0, auxiliar;

    printf("Ingrese un numero en binario:\n");
    scanf("%d", &binario);

    auxiliar = binario;

    while(binario > 0){
        ultimo = binario % 10;
        decimal += ultimo * pow(2, i);
        binario /= 10;
        i++;
    }

    printf("El numero binario %d es %d en decimal", auxiliar, decimal);

    return 0;
}