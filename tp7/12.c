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
        // Llega hasta N - 1 - i porque se compara la palabra en la que se encuentra 
        // con la posicion i + 1, entonces hay que llegar a 1 antes
        // entonces si i = 0 y N = 4 se van a comparar 
        // las palabras 0 con 1, la 1 con 2, la 2 con la 3 y se termina
        // si i = 1 se comparan las palabras 0 con 1, la 1 con 2 y se termina
        // si i = 2 se comparan las palabras 0 con 1
        for(int j = 0; j < N - i - 1; j++){
            if(strcmp(palabras[j], palabras[j+1]) > 0){
                char temporal[20];
                strcpy(temporal, palabras[j]);
                strcpy(palabras[j], palabras[j+1]);
                strcpy(palabras[j+1], temporal);
            }
        }
    }
}