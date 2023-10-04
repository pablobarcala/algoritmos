#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char nombre1[20], char nombre2[20], char apellido[20]);

int main(){
    char nombre1[20], nombre2[20], apellido[20];

    printf("Ingrese dos nombres y un apellido: ");
    scanf("%s %s %s", nombre1, nombre2, apellido);

    convertir(nombre1, nombre2, apellido);

    printf("%s-%s-%s", apellido, nombre1, nombre2);

    return 0;
}

void convertir(char nombre1[20], char nombre2[20], char apellido[20]){
    nombre1[0] = toupper(nombre1[0]);
    nombre2[0] = toupper(nombre2[0]);
    apellido[0] = toupper(apellido[0]);
}