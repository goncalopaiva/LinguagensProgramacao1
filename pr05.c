//
// Created by Goncalo on 10/23/2020.
//

#include "pr05.h"

void main_pr05() {
    /*
    int a=2, b=3;
    printf("a=%d b=%d\n",a,b);
    swap_pxy(&a,&b);
    printf("a=%d b=%d\n",a,b);

    double r1=0,r2=0;
    calc_roots(2,-14,20,&r1,&r2);
    printf("r1=%f \n r2=%f\n",r1,r2);

    int pi[]={11,23,-1,7};
    int size=4;
    int maxmin[2];
    search_minmax(&pi,size,&maxmin);
    printf("Maxmin: %d %d",maxmin[0],maxmin[1]);
    */
    init_and_print_alphabet();
}

void swap_pxy(int* px, int* py) {
    int aux;
    aux = *px;
    *px = *py;
    *py = aux;
}

double* swap_double_array_ptr(double* pi, int pos1, int pos2) {
    int aux=pi[pos1];
    pi[pos1]=pi[pos2];
    pi[pos2]=aux;
    return pi;
}

void calc_roots(int a, int b, int c, double* r1, double* r2) {
    int delta = b^2-4*a*c;
    double sqr = sqrt(delta);
    *r1=(-b-sqr)/2*a;
    *r2=(-b+sqr)/2*a;
}

void print_array_double_with_index(double *pi, int size) {
    for (int i=0; i<size; i++) {
        printf("%f\n",pi[i]);
    }
}

void print_array_double_without_index(double *pi, int size) {


}

int strlen_ptr(char* ps) {
    int i=0, count=0;
    while (ps[i] != '\0') {
        count++;
        i++;
    }
    printf("Count: %d",count);
    return count;
}

int* search_minmax(int *pi, int size, int *maxmin) {
    int max=0, min=pi[1];
    for (int i=0; i<size; i++){
        if (pi[i]>max) {
            max=pi[i];
            *(maxmin+1)=max;
        }
        if (pi[i]<min) {
            min=pi[i];
            *maxmin=min;
        }
    }
    printf("Min: %d \nMax: %d\n",min,max);
}

void init_and_print_alphabet (void) {
    char abc[ALPHABET_LETTERS];
    char ABC[ALPHABET_LETTERS];
    for (int i=0; i<ALPHABET_LETTERS; i++) {
        abc[i] = (char) (97+i);
        ABC[i] = (char) (65+i);
    }

    for (int i=0; i<ALPHABET_LETTERS; i++) {
        printf("%c  ",abc[i]);
    }
    printf("\n");
    for (int i=0; i<ALPHABET_LETTERS; i++) {
        printf("%c  ",ABC[i]);
    }
}
