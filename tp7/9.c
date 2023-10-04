#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20], char palabraModificada[20]);

int main(){
    char palabra[20], palabraModificada[20];
    int mayuscula = 0;

    do{
        printf("Ingrese una palabra en minusculas: ");
        scanf("%s", palabra);

        for(int i = 0; i < strlen(palabra); i++){
            if(isupper(palabra[i])){
                printf("La palabra debe estar en minusculas\n");
                mayuscula = 1;
                break;
            } else {
                mayuscula = 0;
            }
        }
    } while(mayuscula == 1);

    convertir(palabra, palabraModificada);

    printf("%s %s", palabra, palabraModificada);

    return 0;
}

void convertir(char palabra[20], char palabraModificada[20]){
    strcpy(palabraModificada, palabra);
    int i;
    for(i = 0; i < strlen(palabraModificada); i++){
        if(
            palabraModificada[i] != 'a' &&
            palabraModificada[i] != 'e' &&
            palabraModificada[i] != 'i' &&
            palabraModificada[i] != 'o' &&
            palabraModificada[i] != 'u' 
        ){
            palabraModificada[i] = toupper(palabra[i]);
        }
    }
}