//
// Created by Goncalo on 10/16/2020.
//

#include "pr04.h"
#include <string.h>

double pow_recursive (int b, int e) {
    if (e==0) {
        return 1;
    }
    return b*pow_recursive(b,e-1);
}

void print_hangman_recursive(int level) {
    if (level==0) {
        return;
    }
    print_hangman_recursive(level-1);
    switch (level) {
        case 1: printf("\\");break;
        case 2: printf("  O  ");break;
        case 3: printf("/\n");break;
        case 4: printf("   |  \n");break;
        case 5: printf(" / "); break;
        case 6: printf("  \\\n");break;
    }
}

int greatest_word_string (char str[]) {
    int len = strlen(str);
    int max=0, count=0;
    for (int i=0; i<=len; i++) {
        if (isWhite(str[i])) {
            if (count>max){
                max=count;
            }
            count=0;
        }
        else {
            count ++;
        }
    }
}

char* delete_repeated_chars(char s[]) {
    int a=0;
    for (int i=0; s[i] != '\0' ; i++) {
        for (int j=(i-1); j >= 0; j--) {
            if (s[i] == s[j]) {
                break;
            }
        }
        if (i==-1) {
            //s[a++]=s[i];
            s[a]=s[i];
            a++;
        }

    }
    s[a]='\0';
    return s;
}

char* shift_n (char s[], int n) {
    int size=strlen(s);
    for (int i=0; i<size; i++) {
        if (s[i] != s[(i + 2) % size]) {
            break;
        }
    }

}

int count_words_string (char str[]) {
    int size = strlen(str);
    int count = 0;
    for (int i=0; i<=size; i++) {
        if (str[i]==' ' || str[i]=='\0') {
            count ++;
        }
    }
    printf("Numero palavras: %d \n",count);
    return count;
}

char* replace_sub2rep(char str[],char sub[], char rep[]) {

}

void multiply_matrix_by_scalar (int m[], int lines, int columns, int scalar) {
    

}
