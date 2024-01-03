// TITULO O REFERENCIA A ARCHIVO (SOLO EN COMENTARIO)
// ejercicio 1-5

// LIBRERIA
#include <stdio.h>

// main
int main(){
    // VARIABLES
    int fahr;

    // PROCESO PRINCIPAL
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3.0d\t%6.2f\n",fahr,(5.0/9.0)*(fahr-32));
    }


}
