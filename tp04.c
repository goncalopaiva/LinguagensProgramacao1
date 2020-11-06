//
// Created by Goncalo on 10/6/2020.
//

#include "tp04.h"

int main_tp04(int argc, const char * argv[]){


}

int read_vowels(char vowals[], int size) {

    char a[size];

    fgets(a,size,stdin);

    for (int i=0; i<size; i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            vowals[i]=a[i];
        }
    }
    printf("%s",vowals);

}

void print_vowels(char c[], int size) {
    /*for (int i=0; i<size; i++) {
        switch(c[i])
            case 'a': printf("%c",c[i]);
            case 'e': printf("%c",c[i]);
            case 'i': printf("%c",c[i]);
            case 'o': printf("%c",c[i]);
            case 'u': printf("%c",c[i]);
    }*/
}

int max(int ints[], int size) {
    int maior=0;
    for (int i=1; i<size; i++) {
        if (ints[i] > maior) {
            maior=ints[i];
        }
    }
    printf("Maior valor: %d \n",maior);
    return maior;
}

int min(int ints[], int size) {
    int menor=ints[0];
    for (int i=1; i<size; i++) {
        if (ints[i] < menor) {
            menor=ints[i];
        }
    }
    printf("Menor valor: %d \n",menor);
    return menor;
}

float mean(int ints[], int size) {
    int soma=0;
    for (int i=0; i<=size; i++) {
        soma=soma+ints[i];
    }
    int media=soma/size;
    printf("Media dos valores: %d \n",media);
    return media;
}

/** Receives and array of ints and and array with a pattern of numbers to search.
 *  Searches how many segments of the pattern exists inside the array of ints
 *  e.g., v=[5,  2,  2,  3,  4,  4,  4,  4,  1,  1, 2, 2] e p=[2, 2]
 *      would return 2 segments of p exist in v.
 *  @param v - array of ints with patterns of ints
 *  @param sizev - number of elements inside the array
 *  @param p - array with pattern of ints to search
 *  @param sizep - size of the arrray of patterns
 *  @return number of segments p that exist inside the v array
 */
int count_segments_repeated_ints(int v[], int sizev, int p[], int sizep);
