// -------------------- ARCHIVOS

// Sintaxis para definicion de canal

/*
    // Es de tipo puntero pero hay que poner (*)
    FILE *nombre_de_flujo;
*/

// Para abrir un archivo:

/*
    FILE * fopen("<nombre_del_archivo>","<modo>");

    // Si se abre, devuelve un puntero, sino toma valor NULL

    // modo:
    
    // "r" abre solo para lectura
    // "w" crea el archivo solo para escritura
    // "a" abre/crea el archivo para escritura (agrega al final)
    // Al agregar (+) permite lectura/escritura
    // "r+"
    // "w+" 
    // "a+"
*/

// Para cerrar un archivo:

/*
    fclose(FILE*<nombre_del_archivo>);
*/

// Para escribir sobre un archivo de texto:

/*

    fprintf(FILE *,"<cadena_de_control>",[<lista_de_parametros>]);
    // Guarda cadena de caracteres:
    fputs(char *, FILE *);
    // Guarda caracter:
    fputc(char, FILE *);

*/

// Para detectar el fin del archivo:
// feof(FILE *);

/*
    // Para reposicionar el puntero interno

    rewind(FILE *);

    // Mover el puntero a donde quiero
    fseek(FILE *, long int offset, int origen);

    SEEK_SET (0) => inicio
    SEEK_CUR (1) => posicion actual
    SEEK_END (2) => final

    // Tamaño del archivo
    long int ftell(FILE *);

*/

// Para scan:

/*

    fscanf(FILE *,"<especificador_de_dato>",<direccion>);
    // Lee una cadena de caracteres de longitud n:
    fgets(char * cad, int n, FILE *);
    // Devuelve caracter:
    fgetc(FILE *);

*/

// Para archivos binarios

/*
    // Escribir en disco
    fwrite(&var, size, n, FILE *);

    // Leer en disco
    fread(&var, size, n, FILE *);
*/

// ------------------------ EJERCICIO DE AUTOS CON ARCHIVO

/*
    int main(){
        autos a;
        FILE *arc;
        arc = fopen("C:\\progr\datos.dat", "rb+"); => ------------ RUTA DEL ARCHIVO (rb+ read binario)
        if(arc == NULL) {
            arc = fopen("C:\\progr\datos.dat", "wb+"); => ------- (wb+ crea binario, si no existe el archivo) 
        }

        printf("Ingrese los datos: \n");
        printf("Ingrese la marca: ");
        gets(a.marca);
        printf("Ingrese el anio del auto: ");
        scanf("%d", &a.anio);
        
        // ---- PARA CARGAR LOS DATOS AL ARCHIVO
        fseek(arc, 0, 2); => --- Mueve el puntero al final (0 desplaza cantidad de bytes desde el final, 0 posiciona el puntero al principio, 2 al final)
        fwrite(&a, sizeof(a), 1, arc);
        fclose(arc);

        // ---- PARA MOSTRAR LOS DATOS DEL ARCHIVO

        fseek(arc, 0, 0);
        fread(&a, sizeof(a), 1, arc);
        while(!feof(arc)){ => ------------ MIENTRAS NO SEA EL FIN DE ARCHIVO
            printf("Muestro las cosas (marca modelo y anio)");
            fread(&a, sizeof(a), 1, arc);
        }

        return 0;
    }
*/