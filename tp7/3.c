#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20], char palabraModificada[20]);

int main(){
    char palabra[20], palabraModificada[20];

    printf("Ingrese una palabra en minuscula: ");
    scanf("%s", palabra);

    convertir(palabra, palabraModificada);

    printf("%s\n%s", palabra, palabraModificada);

    return 0;
}

void convertir(char palabra[20], char palabraModificada[20]){
    strcpy(palabraModificada, palabra);
    for(int i = 0; i < strlen(palabraModificada); i++){
        if(
            palabraModificada[i] == 'a' || 
            palabraModificada[i] == 'e' ||
            palabraModificada[i] == 'i' ||
            palabraModificada[i] == 'o' ||
            palabraModificada[i] == 'u'
        ){
            palabraModificada[i] = '*';
        } else {
            palabraModificada[i] = toupper(palabraModificada[i]);
        }
    }
}