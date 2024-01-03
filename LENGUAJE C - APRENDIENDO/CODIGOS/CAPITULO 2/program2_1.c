#include <stdio.h>
#include <limits.h>

int main() {
    printf("Rangos utilizando las cabeceras estándar:\n");
    printf("El rango de char es: %d a %d\n", CHAR_MIN, CHAR_MAX);
    printf("El rango de unsigned char es: 0 a %u\n", UCHAR_MAX);
    printf("El rango de short es: %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("El rango de unsigned short es: 0 a %u\n", USHRT_MAX);
    printf("El rango de int es: %d a %d\n", INT_MIN, INT_MAX);
    printf("El rango de unsigned int es: 0 a %u\n", UINT_MAX);
    printf("El rango de long es: %ld a %ld\n", LONG_MIN, LONG_MAX);
    printf("El rango de unsigned long es: 0 a %lu\n", ULONG_MAX);

    printf("\nRangos por cálculo directo:\n");
    printf("El rango de char es: %d a %d\n", -(char)((unsigned char)~0 >> 1), (char)((unsigned char)~0 >> 1));
    printf("El rango de unsigned char es: 0 a %u\n", (unsigned char)~0);
    printf("El rango de short es: %d a %d\n", -(short)((unsigned short)~0 >> 1), (short)((unsigned short)~0 >> 1));
    printf("El rango de unsigned short es: 0 a %u\n", (unsigned short)~0);
    printf("El rango de int es: %d a %d\n", -(int)((unsigned int)~0 >> 1), (int)((unsigned int)~0 >> 1));
    printf("El rango de unsigned int es: 0 a %u\n", (unsigned int)~0);
    printf("El rango de long es: %ld a %ld\n", -(long)((unsigned long)~0 >> 1), (long)((unsigned long)~0 >> 1));
    printf("El rango de unsigned long es: 0 a %lu\n", (unsigned long)~0);

    return 0;
}
