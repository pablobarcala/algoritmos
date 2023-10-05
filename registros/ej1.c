#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct {
    char marca[20];
    char modelo[20];
    int anio;
} autos;

void cargarAutos(int N, autos lista[]);
void mostrarAutos(int N, autos lista[]);
void ordenarAutos(int N, autos lista[]);

int main(){
    int opcion, N, ejecutar = 1;
    autos lista[10];

    do {
        printf("\nSeleccione una de las opciones:\n1. Cargar autos\n2. Ver autos\n3. Ordenar alfabeticamente\n4. Salir\n");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("Ingrese la cantidad de autos: ");
                scanf("%d", &N);
                cargarAutos(N, lista);
                break;
            case 2:     
                mostrarAutos(N, lista);            
                break;
            case 3:
                ordenarAutos(N, lista);
                mostrarAutos(N, lista);
                break;
            case 4:
                ejecutar = 0;
        }
    } while(ejecutar == 1);

    return 0;
}

void cargarAutos(int N, autos lista[]){
    int i;

    // ----- VER CON ESTE CODIGO POR QUE NO PUEDO CARGAR LA MARCA
    // for(i = 0; i < N; i++){
    //     printf("Auto %d:\n", i);
    //     printf("Ingrese la marca: ");
    //     fgets(lista[i].marca, sizeof(lista[i].marca), stdin);
    //     printf("Ingrese el modelo: ");
    //     fgets(lista[i].modelo, sizeof(lista[i].modelo), stdin);
    //     printf("Ingrese el anio: ");
    //     scanf("%d", &lista[i].anio);
    // }

    for(i = 0; i < N; i++){
        printf("\nAuto %d:\n", i + 1);
        printf("Ingrese la marca: ");
        scanf("%s", lista[i].marca);
        printf("Ingrese el modelo: ");
        scanf("%s", lista[i].modelo);
        printf("Ingrese el anio: ");
        scanf("%d", &lista[i].anio);
    }
}

void mostrarAutos(int N, autos lista[]){
    int i;
    printf("AUTOS:\n");
    for(i = 0; i < N; i++){
        printf("\nAuto %d\nMarca: %s\nModelo: %s\nAnio: %d\n", i + 1, lista[i].marca, lista[i].modelo, lista[i].anio);
    }
}

void ordenarAutos(int N, autos lista[]){
    autos temp;
    int i, j;
    for(i = 0; i < N; i++){
        for(j = i + 1; j < N; j++){
            // Primero ordena por marca
            if(strcmp(lista[i].marca, lista[j].marca) > 0){
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }

            // Despues ordena por modelo
            if(strcmp(lista[i].modelo, lista[j].modelo) > 0){
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}