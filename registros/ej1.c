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
void opcionesOrdenar(int N, autos lista[]);
void ordenarAutos(int N, autos lista[], int opcion);
void editarAuto(int N, autos lista[]);
void agregarAuto(int *N, autos lista[]);
void eliminarAuto(int N, autos lista[]);

int main(){
    int opcion, N, ejecutar = 1;
    autos lista[10];

    do {
        printf("\nSeleccione una de las opciones:\n1. Cargar autos\n2. Ver autos\n3. Ordenar autos\n4. Editar un auto\n5. Agregar nuevo auto\n6. Eliminar un auto\n7. Salir\n");
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
                opcionesOrdenar(N, lista);
                mostrarAutos(N, lista);
                break;
            case 4:
                editarAuto(N, lista);
                mostrarAutos(N, lista);
                break;
            case 5:
                agregarAuto(&N, lista);
                break;
            case 6:
                eliminarAuto(N, lista);
                N--;
                break;
            case 7:
                ejecutar = 0;
                break;
            default:
                printf("Ingrese una opcion correcta");
                break;
        }
    } while(ejecutar == 1);

    return 0;
}

// Funcion para cargar autos al inicio
void cargarAutos(int N, autos lista[]){
    int i;

    for(i = 0; i < N; i++){
        printf("Auto %d:\n", i);
        printf("Ingrese la marca: ");
        fflush(stdin);
        fgets(lista[i].marca, sizeof(lista[i].marca), stdin);
        printf("Ingrese el modelo: ");
        fflush(stdin);
        fgets(lista[i].modelo, sizeof(lista[i].modelo), stdin);
        printf("Ingrese el anio: ");
        scanf("%d", &lista[i].anio);
    }
}

// Funcion para mostrar los autos guardados
void mostrarAutos(int N, autos lista[]){
    int i;
    printf("AUTOS:\n");
    for(i = 0; i < N; i++){
        printf("\nAuto %d\nMarca: %s\nModelo: %s\nAnio: %d\n", i + 1, lista[i].marca, lista[i].modelo, lista[i].anio);
    }
}

// Funcion para tomar la opcion a ordenar
void opcionesOrdenar(int N, autos lista[]){
    autos temp;
    int i, j, opcion, ejecutar = 1;
    do{
        printf("\nSeleccione una opcion:\n1. A - Z por marca\n2. A - Z por modelo\n3. Z - A por marca\n4. Z - A por modelo\n5. Mayor a menor anio\n6. Menor a mayor anio\n");
        scanf("%d", &opcion);
        if(opcion <= 6){
            ordenarAutos(N, lista, opcion);
            ejecutar = 0;
        } else {
            printf("Ingrese una opcion valida");
        }
    } while (ejecutar == 1);
}

// Funcion para ordenar autos segun la opcion elegida
void ordenarAutos(int N, autos lista[], int opcion){
    autos temp;
    int i, j;
    switch(opcion){
            case 1:
                for(i = 0; i < N; i++){
                    for(j = i + 1; j < N; j++){
                        // Ordena A-Z por marca
                        if(strcmp(lista[i].marca, lista[j].marca) > 0){
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                    }
                }
                break;
            case 2:
                for(i = 0; i < N; i++){
                    for(j = i + 1; j < N; j++){
                        // Ordena A-Z por modelo
                        if(strcmp(lista[i].modelo, lista[j].modelo) > 0){
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                    }
                }
                break;
            case 3:
                for(i = 0; i < N; i++){
                    for(j = i + 1; j < N; j++){
                        // Ordena Z-A por marca
                        if(strcmp(lista[i].marca, lista[j].marca) < 0){
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                    }
                }
                break;
            case 4:
                for(i = 0; i < N; i++){
                    for(j = i + 1; j < N; j++){
                        // Ordena Z-A por modelo
                        if(strcmp(lista[i].modelo, lista[j].modelo) < 0){
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                    }
                }
                break;
            case 5:
                for(i = 0; i < N; i++){
                    for(j = i + 1; j < N; j++){
                        // Ordena por año de mayor a menor
                        if(lista[i].anio < lista[j].anio){
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                    }
                }
                break;
            case 6:
                for(i = 0; i < N; i++){
                    for(j = i + 1; j < N; j++){
                        // Ordena por año de menor a mayor
                        if(lista[i].anio > lista[j].anio){
                            temp = lista[i];
                            lista[i] = lista[j];
                            lista[j] = temp;
                        }
                    }
                }
                break;
            default:
                break;
        }
}

// Funcion para poder editar un auto
void editarAuto(int N, autos lista[]){
    int opcion, ejecutar = 1;
    do {
        printf("\nSelecciona el auto a editar:\n");
        for(int i = 0; i < N; i++){
            printf("%d. %s %s %d\n", i, lista[i].marca, lista[i].modelo, lista[i].anio);
        }
        scanf("%d", &opcion);

        if(opcion < N){
            ejecutar = 0;
        }
    } while(ejecutar == 1);

    for(int i = 0; i < N; i++){
        if(i == opcion){
            printf("\nIngrese nueva marca: ");
            fflush(stdin);
            fgets(lista[opcion].marca, sizeof(lista[opcion].marca), stdin);
            printf("\nIngrese nuevo modelo: ");
            fflush(stdin);
            fgets(lista[opcion].modelo, sizeof(lista[opcion].modelo), stdin);
            printf("\nIngrese nuevo anio: ");
            scanf("%d", &lista[opcion].anio);
        }
    }
}

// Funcion para agregar un nuevo auto
void agregarAuto(int *N, autos lista[]){
    printf("Nuevo auto:\n");
    printf("Ingrese la marca: ");
    fflush(stdin);
    fgets(lista[*N].marca, sizeof(lista[*N].marca), stdin);
    printf("Ingrese el modelo: ");
    fflush(stdin);
    fgets(lista[*N].modelo, sizeof(lista[*N].modelo), stdin);
    printf("Ingrese el anio: ");
    scanf("%d", &lista[*N].anio);
    (*N)++;
}

// Funcion para eliminar un auto
void eliminarAuto(int N, autos lista[]){
    int i, j, ejecutar = 1, opcion;

    do {
        printf("Seleccione el auto a eliminar:\n");
        for(i = 0; i < N; i++){
            printf("\n%d. %s %s %d", i, lista[i].marca, lista[i].modelo, lista[i].anio);
        }
        scanf("%d", &opcion);
        if(opcion < N){
            ejecutar = 0;
        } else {
            printf("Ingrese una opcion valida");
        }
    } while(ejecutar == 1);

    for(j = opcion; j < N - 1; j++){
        lista[j] = lista[j + 1];
    }
}