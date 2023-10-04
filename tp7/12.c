#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(int N, char palabras[][20]);
void tomarPalabras(int N, char palabras[][20]);

int main(){
    int N;

    printf("Ingrese la cantidad de palabras: ");
    scanf("%d",&N);

    char palabras[N][20];

    tomarPalabras(N, palabras);
    convertir(N, palabras);

    for(int i = 0; i < N; i++){
        printf("%s\n", palabras[i]);
    }

    return 0;
}

void tomarPalabras(int N, char palabras[][20]){
    for(int i = 0; i < N; i++){
        printf("Ingrese una palabra en minusculas: ");
        scanf("%s", palabras[i]);
    }
}

void convertir(int N, char palabras[][20]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < strlen(palabras[i]); j++){
            palabras[i][j] = toupper(palabras[i][j]);
        }
    }

    // Se llega hasta N - 1 por las posiciones de las palabras en el arreglo
    for(int i = 0; i < N - 1; i++){
        // se toma la posicion de i + 1 para saber que palabra se va a comparar con las que faltan
        // entonces si i = 0 y N = 4:
        // j = 1, se comparan las palabras 0 con 1
        // j = 2, se comparan las palabras 0 con 2
        // j = 3, se comparan las palabras 0 con 3
        // si i = 1:
        // j = 2, se comparan las palabras 1 con 2
        // j = 3, se comparan las palabras 1 con 3
        // si i = 2:
        // j = 3, se comparan las palabras 2 con 3

        // VER PAGINA 16 DE UNIDAD 4 DE ARREGLOS

        for(int j = i + 1; j < N; j++){
            if(strcmp(palabras[i], palabras[j]) > 0){
                char temporal[20];
                strcpy(temporal, palabras[i]);
                strcpy(palabras[i], palabras[j]);
                strcpy(palabras[j], temporal);
            }
        }
    }
}