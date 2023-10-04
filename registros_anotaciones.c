// -------------------- REGISTROS

// ------------- 2 formas de iniciar:

// ----- 1)

/*

struct nombreEstructura {
    int a;
    float b;
    char c;
    boolean d;
};

*/

// ----- 2)

/*

typedef struct {
    int a;
    float b;
    char c;
    boolean d;
} nombreEstructura;

*/

// ------------- Asignacion de valores a los campos

// Inicializar una estructura:

// ----- 1)

/*
    struct nombreEstructura p_1;
*/

// ----- 2)

/*
    nombreEstructura p_1;
*/

// Usando operador (.):

/*
    Ingresa un valor entero al iniciador p_1 de la estructura "nombreEstructura" en su campo "a" (int)
    scanf("%d", &p_1.a);
*/

// ----------------------- EJEMPLO 

/*

    struct Car {
        char marca[30];
        char modelo[50];
        int year;
    };

    int main(){

        struct Car car_1 = {"Nissan", "Versa", 2018};

        printf("%s %s %d", car_1.marca, car_1.modelo, car_1.year);
    }

*/

// Es valido hacer car_1 = car_2 si son mismas estructuras
// No es valido si son distintas estructuras, pero si se podria hacer car_1.marca = moto_1.marca
// Donde car_1 es de la estructura Car y moto_1 es de la estructura Moto