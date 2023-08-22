#include<stdio.h>

int main(){
    int radio, diametro, perimetro, area;

    printf("Ingrese el radio de un circulo: ");
    scanf("%d", &radio);

    diametro = 2*radio;
    perimetro = 2*3.14*radio;
    area = 3.14*(radio*radio);

    printf("El diametro del circulo es %d, el perimetro es %d y el area es %d", diametro, perimetro, area);

    return 0;
}