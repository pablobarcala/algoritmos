#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20], char palabraModificada[40]);

int main(){
    char palabra[20], palabraModificada[40];

    printf("Ingrese una palabra en mayusculas: ");
    scanf("%s", palabra);

    convertir(palabra, palabraModificada);

    printf("%s %s", palabra, palabraModificada);

    return 0;
}

void convertir(char palabra[20], char palabraModificada[40]){
    int i, j = 0;
    for(i = 0; i < strlen(palabra); i++){
        if(
            palabra[i] != 'a' &&
            palabra[i] != 'e' &&
            palabra[i] != 'i' &&
            palabra[i] != 'o' &&
            palabra[i] != 'u' &&
            palabra[i] != 'A' &&
            palabra[i] != 'E' &&
            palabra[i] != 'I' &&
            palabra[i] != 'O' &&
            palabra[i] != 'U' 
        ){
            palabraModificada[j] = '+';
            palabraModificada[j+1] = '+';
            
            // Si la letra es consonante, j tiene que aumentar en 2, por eso acá aumenta en 1 y despues vuelve a hacerlo
            j++;
        } else {
            palabraModificada[j] = palabra[i];
        }
        j++;
    }

    palabraModificada[j] = '\0';
}