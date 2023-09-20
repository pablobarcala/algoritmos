// ------------------------------------------- Strings en C



// C no permite strings, usar libreria ctype.h para datos tipos char en un vector
#include<ctype.h>

char cadena1[10];

// Inicializacion

char cad1[10] = "Clase";

// sizeof() devuelve longitud fisica => lo reservado (10), longitud logica => lo utilizado

// Ingreso de string por teclado

/*
    1) scanf("%s", char *s);
    2) fscanf(stdin, "%s", char *s);
        stdin: dispositivo de entrada
    3) fgets(char *s, nro_char, stdin);
        nro_char: la cantidad de caracteres que se leerán
*/

// Mostrar string

/*
    1) printf("%s", char*);
    2) fprintf(stdout, "%s", char*);
    3) fputs(char *s, stdout);
*/

// ---------------------------------- Para cargar un string lo que hago es:

// ---------------------------------- Inicializar la variable:
// char palabra[20];

// ---------------------------------- Pedir que se escriba
// ---------------------------------- Hacer el scan para que escriba:
// scanf("%s", palabra);

// ---------------------------------- Mostrar la palabra:
// fputs(palabra, stdout);


// LIBRERIA ctype.h

// Necesaria para pasar a mayuscula (toupper) y a minuscula (tolower)
// Ver mas funciones

// LIBRERIA sting.h

// Necesaria para obtener longitud logica de un string (strlen)
// Ver mas funciones