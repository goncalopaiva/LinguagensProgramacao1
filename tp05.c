//
// Created by Goncalo on 10/12/2020.
//

#include "tp05.h"
#include "tp04.h"
#include <string.h>

int main_tp05(int argc, const char * argv[]) {
    int mNx100[MAXCOLS100][MAXCOLS100]={
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };

    //print_matrixNx100(mNx100[][MAXCOLS100], 3, 3);


    }

int numberOfDigitsRecursive(int a) {
    if (a<10) {
        return 1;
    }
    return 1+numberOfDigitsRecursive(a/10);
}

/**
 * Multiplies 2 numbers using a recursive algorithm.
 * @param a - fisrt operand
 * @param b - second operand
 * @return the product of a and b
 */
double multiply_recursive(int a, int b) {
    //TPC:
    //Iterativamente: a+a+a+a+a+a (b vezes)
    //Recursivamente: axb -> a+(a-1)*b   Ex.: 5*3=5+(5-1)*3

}

void print_multable_recursive(int n, int level) {
    if (level==1) {
        printf("%d x %d = %d\n",n,level,n*level);
        return;
    }
    print_multable_recursive(n,level-1);
    printf("%d x %d = %d\n",n,level,n*level);
}


int index_first_vogal(char str[]) {
    int i=0;
    while (str[i]!='\0') {
        if (isVowel (str[i])) {
            return i;}
        i++;
    }
    return -1;
}

char* replace_char_by_char(char str[], char o, char r) {
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i]==o) {
            str[i]=r;
            return i;
        }
    }
    printf("%s",str);
}

char* remove_blanks(char str[]) {
    for (int i=0; str[i] != '\0'; i++) {
        if (isWhite(str[i])) {
            int size=strlen(str);
            for (int k=i; k<=size;k++) {

            }
        }
    }
    //ACABAR
}

/**
 * Função que remove todos char c existentes na string.
 * @param str - string a analisar.
 * @param sub - substring com chars a remover.
 * @return endereço da string actualizada.
 */
char* remove_chars(char str[], char sub[]) {
    int size = strlen(str);
    for (int i=0; i<size; i++) {
        if (str[i]==sub[i]) {
            str[i]=' ';
        }
    }
    remove_blanks(str);
    return str;
}

/**
 * Função que retorna índiice mais à esquerda de sub dentro de str.
 * @param str - string a analisar.
 * @aparam sub - sub string a encontrar.
 * @return índice da sub am str.
 *
 * */
int index_sub_left(char str[], char sub[]);


void print_matrixNx100(int mNx100[][MAXCOLS100], int lines, int columns) {

    for (int lin = 0; lin<lines ; lin++) {
        for (int col = 0; col<columns; col++) {
            printf("%d\t",mNx100[lin][col]);
        }

    }


}

