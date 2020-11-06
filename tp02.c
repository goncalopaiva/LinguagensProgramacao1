//
// Created by Goncalo on 9/26/2020.
//

#include "tp02.h"


int checkIfLetter(char c){
    //* Checks if a given char is an alphabet letter (a..z / A..Z).
    // * Returns 1 (true) if so, 0 (false) otherwise.

    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        //return 1;
        printf("E letra do alfabeto");
    else
        //return 0;
        printf("Nao e letra do alfabeto");
}