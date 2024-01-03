#include <stdio.h>
/* cuenta dígitos, espacios blancos, y otros */
int main( ){
    int c, i, nwhite, nother;
    int ndigit[10];
    nwhite = nother = 0;

    // Declara todos los valores del contador de digitos a CERO
    for (i = 0; i < 10; ++i){
        ndigit[i] = 0;}

    // Validacion de digitos o caracteres de entrada
    while ((c = getchar( )) != EOF){
        if (c >= '0' && c <= '9')
            ++ ndigit[c-'0'];   // Ubica el contador del digito correspondiente para aumentarlo
        else if (c == ' ' || c == '\n' || c == '\t')
            ++ nwhite;
        else
            ++ nother;
    }

    // MuestrA la ocurrecia de todos los digitos
    printf("digitos = 0 1 2 3 4 5 6 7 8 9\n");
    printf("conteo = ");
    
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }

    printf("\nespacios blancos = %d, otros = %d\n",nwhite, nother);

    // EJERCICIO 1-14 : aunque yo entendi histograma de numeros
    printf("\n\tHISTOGRAMA\n");
    int contador = 0;
    for (i = 0; i < 10; ++i){
        printf("%d:\t",i);
        for(contador = ndigit[i]; contador > 0; --contador){
            printf("*");
        }
        printf("\n");

    }

}