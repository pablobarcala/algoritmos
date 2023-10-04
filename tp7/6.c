#include<stdio.h>
#include<string.h>
#include<ctype.h>

int contarVocales(char palabra[20]);

int main(){
    char palabra[20];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    printf("La palabra tiene %d vocales", contarVocales(palabra));

    return 0;
}

int contarVocales(char palabra[20]){
    char vocales[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i, j, cantidad = 0;
    for(i = 0; i < strlen(palabra); i++){
        for(j = 0; j < strlen(vocales); j++){
            if(palabra[i] == vocales[j]){
                cantidad++;
            }
        }
    }

    return cantidad;
}