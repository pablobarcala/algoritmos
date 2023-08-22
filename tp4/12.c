#include<stdio.h>

int main(){
    int dia_actual, 
        mes_actual, 
        anio_actual, 
        dia_nacimiento, 
        mes_nacimiento, 
        anio_nacimiento, 
        dias,
        meses,
        anios;

    printf("Ingrese la fecha actual en formato dd mm aaaa:");
    scanf("%d %d %d", &dia_actual, &mes_actual, &anio_actual);
    printf("Ingrese su fecha de nacimiento en formato dd mm aaaa:");
    scanf("%d %d %d", &dia_nacimiento, &mes_nacimiento, &anio_nacimiento);

    if(mes_actual >= mes_nacimiento) {
        anios = anio_actual - anio_nacimiento;
        if(dia_actual >= dia_nacimiento){
            meses = mes_actual - mes_nacimiento;
            dias = dia_actual - dia_nacimiento;
        } else {
            meses = mes_actual - mes_nacimiento - 1;
            dias = 30 - dia_nacimiento + dia_actual;
        }
    } else {
        anios = anio_actual - anio_nacimiento - 1;
        if(dia_actual >= dia_nacimiento){
            meses = 12 - mes_nacimiento + mes_actual;
            dias = dia_actual - dia_nacimiento;
        } else {
            meses = 11 - mes_nacimiento + mes_actual;
            dias = 30 - dia_nacimiento + dia_actual;
        }
    }

    printf("Su edad es %d anios, %d meses y %d dias.", anios, meses, dias);

    return 0;
}