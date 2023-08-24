#include<stdio.h>

int main(){
    int n, 
        x,
        i = 1, 
        s_par = 0, 
        s_impar = 0,
        n_par = 0,
        n_impar = 0;
    float p_par, p_impar;

    printf("Ingrese la cantidad de numeros:");
    scanf("%d", &n);

    while(i<=n)
    {
        printf("Ingrese un numero:");
        scanf("%d", &x);

        if(x % 2 == 0){
            s_par += x;
            n_par++;
        } else {
            s_impar += x;
            n_impar++;
        }

        i++;
    }

    p_par = s_par/n_par;
    p_impar = s_impar/n_impar;
    
    printf("El promedio de los pares es %f y el de los impares es %f", p_par, p_impar);

    return 0;
}