#include<stdio.h>

int main(){
    int N, 
        i = 1,
        edad, 
        altura, 
        mayor_edad = 0,
        orden_mayor_edad,
        menor_altura = 0,
        orden_menor_altura,
        suma_edades = 0,
        suma_alturas = 0,
        promedio_edades,
        promedio_alturas;

    printf("Ingrese la cantidad de valores: ");
    scanf("%d",&N);

    while(i<=N){
        printf("\nIngrese la edad: ");
        scanf("%d",&edad);
        printf("Ingrese la altura: ");
        scanf("%d",&altura);

        if(i == 1){
            mayor_edad = edad;
            menor_altura = altura;
            orden_mayor_edad = i;
            orden_menor_altura = i;
        } else {
            if(edad > mayor_edad){
                mayor_edad = edad;
                orden_mayor_edad = i;
            }
            if(altura < menor_altura){
                menor_altura = altura;
                orden_menor_altura = i;
            }
        }

        suma_edades += edad;
        suma_alturas += altura;

        i++;
    }

    promedio_edades = suma_edades / N;
    promedio_alturas = suma_alturas / N;

    printf("La mayor edad ingresada fue de orden %d: %d\nLa menor altura ingresada fue de orden %d: %d\nEl promedio de las edades ingresadas: %d\nEl promedio de las alturas ingresadas: %d", orden_mayor_edad, mayor_edad, orden_menor_altura, menor_altura, promedio_edades, promedio_alturas);

    return 0;
}