// Operaciones sobre bits

#include <stdio.h>

#define OPER_1 0xB2
#define OPER_2 0x79


int main(){
    unsigned int num,num1,num2;
    num = ~OPER_1; // NOT
    printf("~%X -> result: %X \n",OPER_1,num);

    num1 = OPER_1 << 3;
    printf("%X << 3 -> result: %X \n",OPER_1,num1);

    num2 = OPER_1 >> 2;
    printf("%X >> 2 -> result: %X \n",OPER_1,num2);

    num = OPER_1 & OPER_2;
    printf("%X & %X -> result: %X : \n",OPER_1,OPER_2,num);

    num = OPER_1 ^ OPER_2;
    printf("%X ^ %X -> result: %X : \n",OPER_1,OPER_2,num);

    num = OPER_1 | OPER_2;
    printf("%X | %X -> result: %X : \n",OPER_1,OPER_2,num);


    // num1 = OPER_1 << 3;
    // printf("%X\n, %X",num, num1);       // Usamos %X para mostrar el numero entero en su respectivo HEXADECIMAL




}