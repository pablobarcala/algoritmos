#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20], char palabraModificada[40]);

int main(){
    char palabra[20], palabraModificada[40];

    printf("Ingrese una palabra en minuscula: ");

    scanf("%s", palabra);

    convertir(palabra, palabraModificada);

    printf("%s\n%s", palabra, palabraModificada);

    return 0;
}

void convertir(char palabra[20], char palabraModificada[40]){
    for(int i = 0; i < strlen(palabra); i++){
        palabra[i] = toupper(palabra[i]);
        palabraModificada[i*2] = palabra[i];
        if(i % 2 != 0){
            palabraModificada[i] = ' ';
        }
    }
}