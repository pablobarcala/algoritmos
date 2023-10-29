#include<stdio.h>
#include<string.h>

typedef struct {
    char nombre[20];
    char apellido[40];
    char numero[20];
} contacto;

void cargarContacto(contacto nuevoContacto, FILE *archivo);
void mostrarContactos(contacto nuevoContacto, FILE *archivo);

int main(){
    contacto nuevoContacto;
    FILE *archivo;
    int opcion;

    do { 
        printf("\nSeleccione una opcion:\n1. Cargar contacto\n2. Mostrar contactos\n3. Salir\n");
        scanf("%d", &opcion);
        fflush(stdin);

        switch(opcion){
            case 1:
                cargarContacto(nuevoContacto, archivo);
                break;
            case 2:
                mostrarContactos(nuevoContacto, archivo);
                break;
        }

    } while (opcion != 3);

    return 0;
}

void cargarContacto(contacto nuevoContacto, FILE *archivo){
    archivo = fopen("C:/algoritmos/ejercicio/archivos/contactos.dat", "rb+");
    if(archivo == NULL){
        archivo = fopen("C:/algoritmos/ejercicio/archivos/contactos.dat", "wb+");
    }

    printf("--------------");
    printf("\nIngrese el nombre: ");
    fgets(nuevoContacto.nombre, sizeof(nuevoContacto.nombre), stdin);
    fflush(stdin);
    printf("\nIngrese el apellido: ");
    fgets(nuevoContacto.apellido, sizeof(nuevoContacto.apellido), stdin);
    fflush(stdin);
    printf("\nIngrese el numero: ");
    fgets(nuevoContacto.numero, sizeof(nuevoContacto.numero), stdin);
    fflush(stdin);

    fseek(archivo, 0, 2);
    fwrite(&nuevoContacto, sizeof(nuevoContacto), 1, archivo);
    fclose(archivo);
}

void mostrarContactos(contacto nuevoContacto, FILE *archivo){
    archivo = fopen("C:/algoritmos/ejercicio/archivos/contactos.dat", "rb+");
    if(archivo == NULL){
        archivo = fopen("C:/algoritmos/ejercicio/archivos/contactos.dat", "wb+");
    }

    fseek(archivo, 0, 0);
    fread(&nuevoContacto, sizeof(nuevoContacto), 1, archivo);
    while(!feof(archivo)){
        printf("--------------\n");
        printf("Nombre: %s\n", nuevoContacto.nombre);
        printf("Apellido: %s\n", nuevoContacto.apellido);
        printf("Numero: %s\n", nuevoContacto.numero);
        fread(&nuevoContacto, sizeof(nuevoContacto), 1, archivo);
    }
}