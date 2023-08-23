#include<stdio.h>

int main(){
    int a, b, c;

    printf("Ingrese 3 numeros:");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(b > c){
            if((b == a-1) && (c == a-2)){
                printf("Son descendentes y consecutivos. %d %d %d", a, b, c);
            } else {
                printf("Son descendientes y no consecutivos. %d %d %d", a, b, c);
            }
        } else {
            printf("No son descendientes ni consecutivos. %d %d %d", a, b, c);
        }
    } else if(b < c) {
        if((b == a+1) && (c == a+2)){
            printf("Son ascendentes y consecutivos. %d %d %d", a, b, c);
        } else {
            printf("Son ascendentes y no consecutivos. %d %d %d", a, b, c);
        }
    } else {
        printf("No son ascendentes ni consecutivos. %d %d %d", a, b, c);
    }

    return 0;
}