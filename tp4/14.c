#include<stdio.h>

int main(){
    int a, b, c;

    printf("Ingrese 3 numeros:");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b == c){
        printf("Son iguales %d %d %d", a,b,c);
    } else {
        if(a > b){
            if(b > c){
                printf("%d %d %d", c,b,a);
            } else if(a > c){
                printf("%d %d %d", b,c,a);
            } else {
                printf("%d %d %d", b,a,c);
            }
        } else {
            if(b < c){
                printf("%d %d %d", a,b,c);
            } else if(a > c){
                printf("%d %d %d", c,a,b);
            } else {
                printf("%d %d %d", a,c,b);
            } 
        }   
    }

    return 0;
}