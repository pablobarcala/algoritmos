#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20], char palabraModificada[5]);

int main(){
    char palabra[20], palabraModificada[5];

    do {
        printf("Ingrese una palabra de no menos de 5 caracteres: ");
        scanf("%s", palabra);
    
        if(strlen(palabra) < 5) {
            printf("La palabra debe tener al menos 5 caracteres\n");
        }
    } while(strlen(palabra) < 5);

    convertir(palabra, palabraModificada);

    printf("%s\n%s", palabra, palabraModificada);

    return 0;
}

void convertir(char palabra[20], char palabraModificada[5]){
    int j = 0;
    for(int i = 0; i < strlen(palabra); i++){
        palabra[i] = toupper(palabra[i]);
        if(i <= 1 || i >= strlen(palabra) - 2){
            palabraModificada[j] = palabra[i];
            j++;
        }
    }
}