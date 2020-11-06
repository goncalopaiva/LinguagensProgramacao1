//
// Created by Goncalo on 9/25/2020.
//

#include "pr01.h"
#include <stdio.h>

//sizeof(char) = 1 byte = 8 bit = 256 valores
//("%c",97) -> a
//("%d",'a') -> 97

int main_pr01(){
    printf("Imprime todos os numeros primos entre 1 e 100.\n");
    printPrimeNumbers(1, 100);

}

void readCharPrintAscii(char c) {
    printf("%c=%d",c,(int)c);
}

void printAsciiTableLetters(void) {
    for (int i = 'A'; i <= 'Z'; i++) {
        printf("%c-%d\n", (char) i, i);
    }
}

/*void printDigitOrNot(void) {
    char c;
    while ((char c=getchar()) != '.'){

        if (c='0'){
            printf("Digito. \n");
        } else if (c='\n') {
            printf("Nao Digito. \n");
        }
    }
}*/

int countInsertedChar(char c) {
    char chr = '\0';
    int count=0;

    while (chr != '.') {
        scanf("%c",&chr);
        if (c == chr){
            count++;
        };
    }
    printf ("&d",count);
}

void parseCountInStream(void) {
    char chr='\0';
    int caracteres=0,digitos=0,branco=0,especial=0;
    while (chr != '.') {
        scanf("%c",&chr);
        caracteres++;
        if (chr>='0' && chr<='9'){
            digitos++;
        }
        else if (chr==32) {
            branco++;
        }
        else if (chr>=33 && chr<=46) {
            especial++;
        }
    }
    printf("Existem: \n\t%d caracteres \n\t%d digitos \n\t%d caracteres em branco \n\t%d caracter especiais.\n",caracteres,digitos,branco,especial);
}

void printPrimeNumbers(int min, int max) {
    int div=0;
    printf("Numeros primos (%d,%d): ",min,max);
    for (int i=min; i<=max; i++) {
        if (i<=1) continue;
        for (int j=2; j<=(i/2); j++) {
            if (i % j == 0) { //é divisivel
                div++;
            }
        }
        if (div == 0){
            printf("%d ", i);
        }
        div=0;
    }
}

float intDivisionFloat(int a, int b) {

}