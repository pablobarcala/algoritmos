#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertirMayus(char palabra[20]);
void invertir(char palabra[20]);

int main(){
    char palabra[20];

    printf("Ingrese una palabra en minuscula: ");

    scanf("%s", palabra);

    convertirMayus(palabra);
    invertir(palabra);

    fputs(palabra, stdout);

    return 0;
}

void convertirMayus(char palabra[20]){
    for(int i = 0; i < strlen(palabra); i++){
        palabra[i] = toupper(palabra[i]);
    }
}

void invertir(char palabra[20]){
    int j = strlen(palabra) - 1;
    for(int i = 0; i < j; i++){
        char z;
        z = palabra[i];
        palabra[i] = palabra[j];
        palabra[j] = z;
        j--;
    }
}