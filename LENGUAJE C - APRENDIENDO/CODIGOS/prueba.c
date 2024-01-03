#include <stdio.h>

int miAtoi(const char *str) {
    int resultado = 0;
    int signo = 1;
    int i = 0;

    // Manejar espacios en blanco iniciales
    while (str[i] == ' ') {
        i++;
    }

    // Manejar signo positivo o negativo
    if (str[i] == '-') {
        signo = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Convertir dígitos a número entero
    while (str[i] >= '0' && str[i] <= '9') {
        resultado = resultado * 10 + (str[i] - '0');
        // printf('numero : %d\n', resultado);


        i++;
    }

    return signo * resultado;
}

int main() {
    char numeroComoTexto[] = "4123A4";
    int numeroEntero = miAtoi(numeroComoTexto);

    printf("El numero como texto es: %s\n", numeroComoTexto);
    printf("El numero como entero es: %d\n", numeroEntero);

    return 0;
}
