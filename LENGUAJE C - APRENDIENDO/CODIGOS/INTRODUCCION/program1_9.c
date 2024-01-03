// 1_9 : ARREGLOS DE CARACTERES

// LIBRERIAS
#include <stdio.h>

// CONSTANTES SIMBOLICAS
#define MAXLINE 1000

// DECLARACION DE VARIABLES EXTRA

// main - CUERPO PRINCIPAL
int main(){
    // VARIABLES
    int len;    // Longitud actual de la linea
    int max;    // Maxima longitud vista hasta el momento
    char line[MAXLINE]; // Linea de entrada actual
    char longest[MAXLINE];  // La linea mas larga se guarda aqui

    max = 0;
    
    // PROCESO PRINCIPAL
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s\n", longest);
    }
    return 0;
}

// Funciones EXTRA
int getline(char s[], int lim){     // lee una linea s y retorna su longitud
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar())!= EOF && c!= '\n'; ++i){
        s[i] = c;
    }

    if(c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;   // Retorna la longitud de la linea
}

void copy(char to[], char from[]){  // copia from en to 
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}
