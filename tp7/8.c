#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertir(char palabra[20]);

int main(){
    char palabra[20];
    int minuscula = 0;

    do{
        printf("Ingrese una palabra en mayusculas: ");
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

    convertir(palabra);

    printf("%s", palabra);

    return 0;
}

void convertir(char palabra[20]){
    int i;
    for(i = 0; i < strlen(palabra); i++){
        palabra[i] = tolower(palabra[i]);
    }
}