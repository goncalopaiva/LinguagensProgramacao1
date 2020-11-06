//
// Created by Goncalo on 10/1/2020.
//

#include "pr02.h"

/**
	* Iteratively reads chars (from '0' to '9') and returns the complete decimal number
	* @return - decimal number
	* e.g. input: ('2', '1', '8', 'e') => output: 218
	* e.g. input: ('4', '3', 'e') => output: 43
 */
int readDigitsToInt(void) {

}

/**
	* splits a number and prints each class in an ascending order
	* @param n - decimal value to be splited
	* e.g. input: (218); output => 8, 1, 2
*/
void printNumberClassesUnitsToUpperClasses(int n) {



}

/**
	* splits a number and prints each class in a descending order
	* @param n - decimal value to be splited
	* e.g. input: (218); output => 2, 1, 8
*/
void printNumberClassesFromHigherToUnits(int n);

/**
	* iteratively multiplies two numbers by unfolding the multiplication into sums
	* @param a - num to be multiplied
	* @param b - multiplier
	* @return - multilpication result
	* e.g. input: (2, 5) => output: 10
*/
int multiplication (int a, int b) {
    printf("(%dx%d): %d",a,b,a*b);
    return a*b;
}

void printMultiplicationTable (int num) {
    int size=10;
    for (int i=1; i<=size;i++) {
        printf("%dx%d=%d\n",num,i,num*i);
    }
}

/**
	* prints inverted pyramid
	* @param width - pyramid's base width
	* e.g. input: (5); output: 1 2 3 4 5
	*							 2 3 4
	*							   3
*/
void printPyramid (int width) {

}

/**
	* checks if a number is a product of three consecutive numbers
	* @param num - number to be checked
	* @return - true (0) or false (1)
	* e.g. input: (504) => output: is triangular 504 = 7x8x9
	* e.g. input: (1320) => output: is triangular 1320 = 10x11x12
*/
int isNumberTriangular (unsigned int num);

/**
	* Converts a decimal number to binary
	* @param num - decimal number
	* @return - binary converted number
	* e.g. input: (10); output: 1010
*/
int decimalToBinary (int num) {
    int v[50]; //vetor para calculos intermedios
    int i=0, j=0;

    while (num>0) {
        v[i]=num%2;
        i++;
        num=num/2;
    }

    for(j = i - 1; j >= 0; j--)
        printf("%d", v[j]);
    printf("\n");

    //Imprime o numero em binário. Alterar para retornar o numero em binário.

}

int binaryToDecimal (int bin) {
    int dec=0;
    printf("Binario %d para decimal: ",bin);
    for (int i=0; bin>0; i++) {
        dec = dec + pow(2,i) * (bin % 10);
        bin=bin/10;
    }
    printf("%d",dec);
    return dec;
}

/**
	* receives a float in format hh.mm and splits it into hours and minutes
	* @param f - hour in format hh.mm
	* input: (2.59); output: 2h, 59 min
*/
void floatToHoursMinutes(float f) {


}
