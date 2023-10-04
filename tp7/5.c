#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20], char palabraModificada[20]);

int main(){
    char palabra[20], palabraModificada[20];
    int minuscula = 0;

    do {
        printf("Ingrese una palabra en mayuscula: ");
        scanf("%s", palabra);
        
        for(int i = 0; i < strlen(palabra); i++){
            if(islower(palabra[i])){
                printf("La palabra debe estar en mayusculas\n");
                minuscula = 1;
                break;
            } else {
                minuscula = 0;
            }
        }
    } while(minuscula == 1);

    convertir(palabra, palabraModificada);

    printf("%s\n%s", palabra, palabraModificada);

    return 0;
}

void convertir(char palabra[20], char palabraModificada[20]){
    int j = 0;
    for(int i = 0; i < strlen(palabra); i++){
        if(palabra[i] == 'C' && palabra[i+1] == 'A'){
            i++;
            continue;
        } else {
            palabraModificada[j] = palabra[i];
            j++;
        }
        if(i == strlen(palabra)){
            break;
        }
    }
}