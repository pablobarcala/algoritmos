// ------------------------------------------ Arreglos en C

// UNIDIMENSIONAL: ------ tipo_de_dato nombre[cantidad_de_elementos]

/*
    int vect[10] = {1,2,3}
    float lista[12]
    char vectChar[15]
*/

// BIDIMENSIONAL: ------ tipo_de_dato nombre[nro_filas][nro_columnas]

/*
    int vect[4][8] = {{1,2,3},{4,5,6}}
    float lista[6][6]
    char vectChar[5][6]
*/

// El nombre del arreglo es una constante puntero del primero elemento del vector:
// vect => &vect[0]

// ------------------------- Bucle para cargar arreglos UNIDIMENSIONALES

/*
    for(int i = 0; i<sizeof(vect)/sizeof(int);i++){
        scanf("%d", &vect[i]);
    }
*/

// ------------------------- Bucle para cargar arreglos UNIDIMENSIONALES

/*
    for(int i = 0; i<nrofilas; i++){
        for(int j = 0; j<nrocolumnas; j++){
            scanf("%d", &mat[i][j]);
        }
    }
*/

// ------------------------- Funcion para cargar y mostrar arreglos

/*
    void cargarVect(int tam, int vect[]){
        int i;
        for(i = 0; i<tam; i++){
            scanf("%d", &vect[i]);
        }
    }
*/

/*
    void mostrarVect(int tam, int vect[]){
        int i;
        for(i = 0; i<tam; i++){
            printf("%d", vect[i]);
        }
    }
*/