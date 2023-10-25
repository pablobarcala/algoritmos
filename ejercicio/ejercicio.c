#include<stdio.h>
#include<string.h>

typedef struct {
    char nombre[20];
    char apellido[40];
    int numero;
} contacto;

void cargarContacto(contacto nuevoContacto, FILE *archivo);
void mostrarContactos(contacto nuevoContacto, FILE *archivo);
void eliminarContacto(contacto contacto, FILE *archivo);

int main(){
    contacto nuevoContacto;
    FILE *archivo;
    int opcion;

    do { 
        printf("\nSeleccione una opcion:\n1. Cargar contacto\n2. Mostrar contactos\n3. Eliminar un contacto\n4. Salir\n");
        scanf("%d", &opcion);
        fflush(stdin);

        switch(opcion){
            case 1:
                cargarContacto(nuevoContacto, archivo);
                break;
            case 2:
                mostrarContactos(nuevoContacto, archivo);
                break;
            case 3:
                eliminarContacto(nuevoContacto, archivo);
                break;
        }

    } while (opcion != 4);

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
    scanf("%d", &nuevoContacto.numero);

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
        printf("Numero: %d\n", nuevoContacto.numero);
        fread(&nuevoContacto, sizeof(nuevoContacto), 1, archivo);
    }
}

void eliminarContacto(contacto contacto, FILE *archivo){
    int numeroEliminar;

    archivo = fopen("C:/algoritmos/ejercicio/archivos/contactos.dat", "rb+");
    if(archivo == NULL){
        archivo = fopen("C:/algoritmos/ejercicio/archivos/contactos.dat", "wb+");
    }

    printf("Ingrese el numero del contacto a eliminar: ");
    scanf("%d", &numeroEliminar);

    fseek(archivo, 0, 0);
    while(fread(&contacto, sizeof(contacto), 1, archivo) > 0){
        if(numeroEliminar == contacto.numero){
            printf("\nSe elimino el contacto con el numero ingresado\n");
        } else {
            fwrite(&contacto, sizeof(contacto), 1, archivo);
        }
    }

    remove("archivos/contactos.dat");
    rename("archivos/contactos.dat", "archivos/contactos.dat");
}