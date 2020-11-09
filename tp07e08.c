//
// Created by Goncalo on 11/9/2020.
//

#include "tp07e08.h"

//C:\>prog abc xpto 123

//===================== tp07.h =====================

void count_consonants(int c, const char *astr[], char strings[][MAX128], char consonants[][MAX128]) {
    for (int lin=0; lin<c; lin++) {
        strcpy(strings[lin],astr[lin]); //strcpy(&destino,&origem);
        int k=0;
        for (int col=0; col<strlen(strings[lin]); col++) {
            if (isConsonant(strings[lin][col])) {
                consonants[lin][k++]=strings[lin][col];
            }
        }
        consonants[lin][k++]='\0';
        printf("Consonants [%d] = %s -> %d \n",lin,consonants[lin],k);
    }
}

void print_non_repeated_strs(const char *astr[], int size) {


}

int str_exists_before(const char str[], const char *argv[], int line) {


}

//===================== tp08.h =====================

int** create_dynmatrix_ints(int lines, int columns) {
    int** ppi=NULL;
    ppi = (int**) malloc(sizeof(int *)*lines);
    for (int l=0; l<lines; l++){
        int* p = malloc(sizeof(int)*columns);
        *(ppi+l)=p;
    }
    return ppi;
}

void print_dynmatrix_ints(int **ppints, int lines, int columns) {
    for (int lin=0; lin<lines; lin++) {

        for(int col=0; col<columns; col++) {
            printf("$d\t",*(*(ppints+lin)+col));
        }
        printf("\n");
    }
}

void set_dynmatrix_ints(int **ppints, int lines, int columns, int value, int newvalue) {


}

void free_dynmatrix_ints(int **ppints, int lines, int columns) {
    for (int lin=0; lin<lines; lin++) {
        //free de cada int*
        int *p= *(ppints+lin);
        free(p);
    }
    //free int **
    free(ppints);
}

int main_tp07e08(int argc, const char * argv[]) {
    char m1 [MAX128][MAX128];
    char m2 [MAX128][MAX128];
    count_consonants(argc,argv,m1,m2);

    int** ppi = create_dynmatrix_ints(5,6);
    print_dynmatrix_ints(ppi,5,6);

}