//
// Created by Goncalo on 11/6/2020.
//

#include "pr07.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char** read_dyn_array_dyn_strings(char ** astr, int * size) {
    char aux[200];
    int i=0;

    while(strcmp(fgets(aux,200,stdin),"exit\n")!=0){
        aux(strlen(aux-1))='\0';
        astr=create_copy_dyn_string(aux);
        astr=insert_dyn_array_din_string(astr,i++,size,copy_dyn_string())
    }

}

char insert_dyn_array_din_string(char **astr, int read, int size, char *str);

