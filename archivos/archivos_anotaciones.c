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