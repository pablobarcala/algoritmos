#include<stdio.h>

int main(){
    int mts, dcm, cm;

    printf("Ingrese una medida en metros: ");
    scanf("%d", &mts);

    dcm = mts*10;
    cm = mts*100;

    printf("La medida %dmts. equivale a %ddcm. y %dcm.", mts, dcm, cm);

    return 0;
}