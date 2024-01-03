#include <stdio.h>

/*CONVERSION DE FARENHEIT A CELSIUS*/

int main(){
    // varaibles
    float farht, celsius, lower, upper, step;
    //int step;

    lower = 0;
    upper = 40;
    step = 4;

    printf("CONVERSION DE FARENHEIT A CELSIUS\n");

    celsius = lower;

    while (celsius <= upper){
        farht = (9*celsius)/5 + 32; //*celsius + 32;
        printf("%3.0f\t%6.1f\n",celsius,farht);
        celsius += step;
    }
}

/*TENER SIEMPRE PRESENTE LA MRD DE FORMATO DE PRINTF, POR QUE ME ESTUVE PARTIENDO LA CABEZA
PENSANDO QUE ESTABA MAL LA DECLARACION DE VARIABLES Y SOLO ERA EL FORMATO


SI ALGUIEN LEE ESO QUE RECUERDE MI PTO CONSEJO XDDD
6/12/23
*/