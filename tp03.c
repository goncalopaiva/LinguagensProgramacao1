//
// Created by Goncalo on 9/28/2020.
//

#include "tp03.h"

int main_1 () {
    int a=1234;
    numberOfDigitsIterative(a);
}

int isDigit(char c){
    if (c>='0' && c<='9') {
        return 1;
    } else {
        return 0;
    }
}

void readKeysPressedPrintDigits(void) {
    char c = 0;
    do {
        scanf("%c",&c);
        if (c>='0' && c<='9') {
            printf("%c is a digit.\n",c);
        } else {
            printf("%c is not a digit.\n",c);
        }
    } while (c != '.');
}

int isVowel(char c) {
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
        //printf("%c - E vogal.\n",c);
        return 1;
    } else if (c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
        //printf("%c - E vogal.\n",c);
        return 1;
    } else {
        //printf("%c - Nao e vogal.\n",c);
        return 0;
    }
}

int isConsonant(char c) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
        //printf("%c - E consoante.\n",c);
        return 1;
    } else {
        //printf("%c - Nao e consoante.\n",c);
        return 0;
    }
}

int isWhite(char c) {
    if (c == ' ' || c == '\t' || c == '\r') {
        return 1;
    } else {
        return 0;
    }
}

void printKeyType(char c) {
    if (c >= 48 && c <= 57) {
        printf("%c - E digito.\n", c);
    } else if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||
            c == 'U') {
            printf("%c - E vogal.\n", c);
        } else {
            printf("%c - E consoante.\n", c);
        }
    } else {
        printf("%c - E caracter especial. \n", c);
    }
}

void readKeysPressedPrintKeyType(void) {
    char c = 0;
    do {
        scanf("%c",&c);
        if (c >= 48 && c <= 57) {
            printf("%c - E digito.\n", c);
        } else if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' ||
                c == 'U') {
                printf("%c - E vogal.\n", c);
            } else {
                printf("%c - E consoante.\n", c);
            }
        } else {
            printf("%c - Outro. \n", c);
        }
    } while (c != '.');
}

int countWordsStdin(void) {

    char *v;
    int contador=0, size=0;
    size = sizeof(v);
    for (int i = 0; i <= size; i++) {
        char c = i;
        if (c == ' ' || c == '\t' || c == '\n' || c == '\r'){
            contador++;
        }
    }
    printf("Numero de palavras: %d\n",contador);
}

int numberOfDigitsIterative(int a) {
    int contador=0;
    int num = a;
    while (a != 0) {
        a = a/10;
        contador++;
    }
    printf("O numero %d tem %d digitos.\n",num,contador);
    return contador;
}