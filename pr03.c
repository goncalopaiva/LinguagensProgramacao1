//
// Created by Goncalo on 10/8/2020.
//

#include "pr03.h"

int sum(int ints[], int size){
    int sum=0;
    printf("Array: ");
    for (int i=0; i<size; i++) {
        printf("%d ",ints[i]);
        sum=sum+ints[i];
    }
    //return sum;
    printf("\nSoma: %d", sum);
}

int int_compare(int a[], int b[], int size) {
    for (int i=0; i<size;i++) {
        if (a[i]<b[i]){
            printf("return -1");
            return -1;
        }
        if (a[i]>b[i]) {
            printf("return 1");
            return 1;
        }
        printf("return 0");
        return 0;
    }

}

int lowest_index_number(int v[], int n, int size) {
    for (int i=0; i<size; i++) {
        if (v[i]==n){
            //printf("%d",i);
            return i;
        }
    }
}

int highest_index_number(int v[], int n, int size) {
    for (int i=size-1; i >= 0; i++) {
        if (v[i]==n){
            //printf("%d",i);
            return i;
        }
    }
}

int count_frequency_number(int v[], int n, int size){
    int count=0;
    for (int i=0; i<size; i++) {
        if (v[i]==n)
         count++;
    }
    //printf("Contagem: %d",count);
    return count;
}

int number_highest_frequency(int v[], int size) {
    int max=0,res=0;
    for (int i=0; i<size; i++) {
        if ((res=count_frequency_number(v,v[i],size))>max) {
            max=res;
        }
    }
    //printf("Maior numero: %d",max);
    return max;
}

int size_greatest_segment_repeated_ints(int v[], int size) {
    int count=1, max=0;
    for (int i=0; i<size-1; i++) {
        if (v[i] == v[i+1]) {
            count ++;
        }
        else {
            if (count>max) {
                max=count;
            }
            count=1;
        }
    }
    printf("return count (%d)",count);
    return count;
}

void dip_array(int a[], int b[], int size) {

    for (int i=0; i<size; i++) {
        b[i]=a[i];
    }

    printf("Array: \t\t");
    for (int i=0; i<size; i++) {
        printf("%d ",a[i]);
    }

    printf("\nArray copia: \t");
    for (int i=0; i<size; i++) {
        printf("%d ",b[i]);
    }


}

//TPC:
//  -Imprimir array removendo repetidas.
//  -Contar numeros duplicados.