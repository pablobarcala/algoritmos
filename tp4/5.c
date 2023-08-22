#include<stdio.h>

int main(){
    int f, c;

    printf("Ingrese la temperatura en Fahrenheit: ");
    scanf("%d", &f);

    c = (f-32)*5/9;

    printf("La temperatura %d°F equivale a %d°C", f, c);

    return 0;
}