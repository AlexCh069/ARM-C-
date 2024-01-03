#include <stdio.h>
#include <conio.h>

/*
Programa que retorna la conversion de grados celsius a farenhit
fahr = 0, 20, 30, ...
*/

int main()
{
// variables

//int fahr, celsius, lower, upper, step; // Formato con valores enteros 
float fahr, celsius, lower, upper, step;

lower = 0;      // Limite inferior de la tabla de temperaturas
upper = 300;    // Limite superior
step = 15;      // Tamaño de incrementos para la tabla

fahr = lower;   // Inicializamos la variable
printf("\tCONVERSION DE CELSIUD A FARENHEIT\n");
while (fahr <= upper){
    //celsius = 5*(fahr-32)/9; // Version INT
    celsius = (5.0/9.0)*(fahr-32);    // version float
    /*
    La razón de multiplicar por 5 y después dividir entre 9 en lugar de solamente
    multiplicar por 5/9 es que en C, como en muchos otros lenguajes, la división de
    enteros trunca el resultado: cualquier parte fraccionaria se descarta. Puesto que
    5 y 9 son enteros, 5/9 sería truncado a cero y así todas las temperaturas Celsius
    se reportarían como cero.
    */

    //printf("%3d\t%6d\n", fahr, celsius); // Formato con valores enteros

    printf("farenheit: %3.0f\t celsius: %6.1f\n", fahr, celsius);
    fahr = fahr + step;
}

}


