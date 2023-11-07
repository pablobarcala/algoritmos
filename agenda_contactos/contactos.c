#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char nombre[20];
    char apellido[40];
    char numero[20];
} contacto;

void cargarContacto();
void mostrarContactos();
void buscarContacto();
void opcionesOrdenar();
void ordenarContactos(int opcion);
void editarContacto();
void eliminarContacto();

int main(){
    int opcion;

    do { 
        printf("\nSeleccione una opcion:");
        printf("\n1. Cargar contacto");
        printf("\n2. Mostrar contactos");
        printf("\n3. Buscar contacto");
        printf("\n4. Mostrar contactos ordenados");
        printf("\n5. Editar un contacto");
        printf("\n6. Eliminar un contacto");
        printf("\n7. Salir\n");

        scanf("%d", &opcion);
        fflush(stdin);

        switch(opcion){
            case 1:
                cargarContacto();
                break;
            case 2:
                mostrarContactos();
                break;
            case 3:
                buscarContacto();
                break;
            case 4:
                opcionesOrdenar();
                break;
            case 5:
                editarContacto();
                break;
            case 6:
                eliminarContacto();
                break;
        }
    } while (opcion != 7);

    return 0;
}

FILE* abrirArchivo(){
    FILE *archivo;

    archivo = fopen("C:/algoritmos/agenda_contactos/archivos/contactos.dat", "rb+");
    if(archivo == NULL){
        archivo = fopen("C:/algoritmos/agenda_contactos/archivos/contactos.dat", "wb+");
    }

    return archivo;
}

void cargarContacto(){
    FILE *archivo = abrirArchivo();
    contacto nuevoContacto;

    printf("--------------\n");
    printf("Ingrese el nombre: ");
    fgets(nuevoContacto.nombre, sizeof(nuevoContacto.nombre), stdin);
    fflush(stdin);
    printf("Ingrese el apellido: ");
    fgets(nuevoContacto.apellido, sizeof(nuevoContacto.apellido), stdin);
    fflush(stdin);
    printf("Ingrese el numero: ");
    fgets(nuevoContacto.numero, sizeof(nuevoContacto.numero), stdin);
    fflush(stdin);

    fseek(archivo, 0, 2);
    fwrite(&nuevoContacto, sizeof(nuevoContacto), 1, archivo);
    fclose(archivo);
}

void mostrarContactos(){
    FILE *archivo = abrirArchivo();
    contacto contacto;
    int posicion = 1;

    fseek(archivo, 0, 0);
    fread(&contacto, sizeof(contacto), 1, archivo);
    while(!feof(archivo)){
        printf("--------------\n");
        printf("CONTACTO %d:\n", posicion);
        printf("Nombre: %s", contacto.nombre);
        printf("Apellido: %s", contacto.apellido);
        printf("Numero: %s", contacto.numero);
        posicion++;
        fread(&contacto, sizeof(contacto), 1, archivo);
    }

    if(posicion == 1){
        printf("\n~~~ NO HAY CONTACTOS ~~~\n");
    }

    fclose(archivo);
}

void buscarContacto(){
    FILE *archivo = abrirArchivo();
    contacto contacto;
    char apellido[20];
    int encontrado = 0;

    printf("Ingrese el apellido a buscar: ");
    fgets(apellido, sizeof(apellido), stdin);
    fflush(stdin);

    fseek(archivo, 0, 0);
    fread(&contacto, sizeof(contacto), 1, archivo);

    while(!feof(archivo)){
        if(strcmp(apellido, contacto.apellido) == 0){
            printf("-------------\n");
            printf("Nombre: %s", contacto.nombre);
            printf("Apellido: %s", contacto.apellido);
            printf("Telefono: %s", contacto.numero);
            encontrado = 1;
        }
        fread(&contacto, sizeof(contacto), 1, archivo);
    }

    if(encontrado == 0){
        printf("No se encuentra un contacto con el apellido %s", apellido);
    }

    fclose(archivo);
}

void opcionesOrdenar(){
    int opcion;

    do {
        printf("\nSeleccione una opcion:\n1. A - Z por apellidos\n2. Z - A por apellidos\n3. Volver\n");
        scanf("%d", &opcion);
        fflush(stdin);

        if(opcion > 3){
            printf("Seleccione una opcion correcta.\n");
        }

        ordenarContactos(opcion);
    } while(opcion != 3);
}

void ordenarContactos(int opcion){
    FILE *archivo = abrirArchivo();
    contacto contacto, temp, contactosOrdenados[20];
    int n = 0;

    fseek(archivo, 0, 0);
    fread(&contacto, sizeof(contacto), 1, archivo);
    while(!feof(archivo)){
        contactosOrdenados[n] = contacto;
        n++;
        fread(&contacto, sizeof(contacto), 1, archivo);
    }    

    switch(opcion){
        case 1:
            for(int i = 0; i < n; i++){
                for(int j = i; j < n; j++){
                    if(strcmp(contactosOrdenados[i].apellido, contactosOrdenados[j].apellido) > 0){
                        temp = contactosOrdenados[i];
                        contactosOrdenados[i] = contactosOrdenados[j];
                        contactosOrdenados[j] = temp;
                    }
                }
            }
            break;
        case 2:
            for(int i = 0; i < n; i++){
                for(int j = i; j < n; j++){
                    if(strcmp(contactosOrdenados[i].apellido, contactosOrdenados[j].apellido) < 0){
                        temp = contactosOrdenados[i];
                        contactosOrdenados[i] = contactosOrdenados[j];
                        contactosOrdenados[j] = temp;
                    }
                }
            }
            break;
    }

    if(opcion < 3) {
        for(int i = 0; i < n; i++){
            printf("--------------\n");
            printf("Nombre: %s", contactosOrdenados[i].nombre);
            printf("Apellido: %s", contactosOrdenados[i].apellido);
            printf("Telefono: %s", contactosOrdenados[i].numero);
        }
    }

    fclose(archivo);
}

void editarContacto(){
    FILE *archivo = abrirArchivo();
    contacto contacto;
    int opcion, i = 0;

    printf("\n-------------\n");
    printf("\nSeleccione una opcion a editar: \n");
    printf("\nESCRIBIR '0' PARA VOLVER\n\n");
    mostrarContactos(contacto, archivo);
    scanf("%d", &opcion);
    fflush(stdin);

    fseek(archivo, 0, 0);
    fread(&contacto, sizeof(contacto), 1, archivo);
    while(!feof(archivo)){
        if(i == opcion - 1){
            printf("-----------\n");
            printf("Escriba nuevo nombre: ");
            fgets(contacto.nombre, sizeof(contacto.nombre), stdin);
            fflush(stdin);
            printf("Escriba nuevo apellido: ");
            fgets(contacto.apellido, sizeof(contacto.apellido), stdin);
            fflush(stdin);
            printf("Escriba nuevo telefono: ");
            fgets(contacto.numero, sizeof(contacto.numero), stdin);
            fflush(stdin);

            fseek(archivo, opcion - 1, SEEK_SET);
            
            fwrite(&contacto, sizeof(contacto), 1, archivo);
            break;
        }
        i++;
        fread(&contacto, sizeof(contacto), 1, archivo);
    }

    if(opcion == 0) {
        printf("\nNo se edito ningun contacto\n");
    }

    fclose(archivo);
}

void eliminarContacto(){
    FILE *archivo = abrirArchivo();
    FILE *temp = fopen("archivos/temp.dat", "wb+");

    contacto contacto;
    int opcion, i = 0;

    printf("\n-------------\n");
    printf("\nSeleccione una opcion a eliminar: \n");
    printf("\nESCRIBIR '0' PARA VOLVER\n\n");
    mostrarContactos(contacto, archivo);
    scanf("%d", &opcion);
    fflush(stdin);

    fseek(archivo, 0, 0);
    fread(&contacto, sizeof(contacto), 1, archivo);
    while(!feof(archivo)){
        if(i != opcion - 1){
            fwrite(&contacto, sizeof(contacto), 1, temp);
        }
        i++;
        fread(&contacto, sizeof(contacto), 1, archivo);
    }

    fclose(archivo);
    fclose(temp);

    remove("archivos/contactos.dat");
    rename("archivos/temp.dat", "archivos/contactos.dat");

    if((opcion - 1) >= 0 && (opcion - 1) <= i) {
        printf("\nContacto eliminado correctamente\n");
    } else {
        printf("\nNo se elimino ningun contacto\n");
    }
}