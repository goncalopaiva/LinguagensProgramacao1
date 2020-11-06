//
// Created by Goncalo on 10/19/2020.
//

#include "tp06.h"

//*p -> conteudo para onde p aponta

int main_tp06(int argc, const char * argv[]) {
    /*
    int x=10, y=20;
    int *p = &x; //int *p=NULL; p=&x;
    //*p=40 -> x=40;
    printf("x=%d, y=%d\n",x,y);

    int a=10;
    printf("a=%d\n",a);
    double_xy(a);
    printf("Passagem por valor, a=%d\n", a);
    double_pxy((int *) a);
    printf("Passagem por referencia, a=%d\n", a);

    int v[10]={1,2,3,4,5};
    double_array_ints_ptr(v,10);

    */

    char str[]="O MEU OLA MUNDO, OLA";
    char sub[]="OLA";
    printf("String original: %s\n",str);
    //del_substr(str,sub);
    del_allsubstr(str, sub);
    printf("String alterada: %s\n",str);
}

void double_xy(int x) {
    x=x*2; //x*=2;
}

void double_pxy(int *px) {
    *px=2*(*px);
}

int* double_array_ints_ptr(int* pi, int size) {  //Usar *(pd + i)
    //*pi=2*(*pi);
    for (int i=0; i<size; i++) {
        *(pi + i)=2*(*(pi+i));
    }
}

void print_array_ints_ptr(int* pi, int size) {
    for (int i=0; i<size; i++) {
        printf("%d ",*(pi+i));
    }
}

char* del_substr(char *pstr, char *psub) {
    for (int i=0;*(pstr+i)!='\0'; i++){
        int k=0;
        for (k=0;*(psub+k)!='\0';k++){
            if (*(pstr+i+k)==*(psub+k)) {
                continue;
            } else {
                break;
            }
        }
        if (k==strlen(psub)) { //ou *(psub+k)=='\0'
            for (int j=i; *(pstr+j)!='\0'; j++) {
                *(pstr+j)=*(pstr+j+k);
            }
            return pstr;
        }
    }
    return pstr;
}

char* del_allsubstr(char *pstr, char *psub) {
    for (int i=0; *(pstr+i)!='\0'; i++) {
        del_substr(pstr, psub);
    }
}

char* strcat_ptr1(char *pdest, char *porg) {

}

char* strcat_ptr2(char *pdest, char *porg) {

}
