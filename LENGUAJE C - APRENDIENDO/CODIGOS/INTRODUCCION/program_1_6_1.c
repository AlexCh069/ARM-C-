// ejercicio 1-15
// Crear una funcion que convierta la temperatura de fahrenheit a celsius


// LIBRERIAS
#include <stdio.h>

// CONSTANTES SIMBOLICAS

// DECLARACION DE VARIABLES EXTRA


// main - CUERPO PRINCIPAL
int main(){
    // VARIABLES
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; 
    upper = 200;
    step = 20;

    // PROCESO PRINCIPAL
    fahr = lower;
    while(fahr <= upper){
        celsius = convertir_a_celsius(fahr);
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }


}

// Funciones extra 
int convertir_a_celsius(int fahrenheit){
    int celsius;
    celsius = 5*(fahrenheit - 32)/9;
    return celsius;
}
