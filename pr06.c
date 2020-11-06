//
// Created by Goncalo on 11/6/2020.
//

#include "pr06.h"

void print_received_args(int argc, const char *argv[]) {
    int i;
    printf("%d\n",argc);
    for(i=1;i<argc;i++) {
        printf("%s", argv[i]);
    }
}

char* str_to_upper(char *pstr, char strUpper[]) {
    strcpy (strUpper,pstr);
    for (int i=0; i<strlen(strUpper);i++) {
        if (strUpper[i] >= 'a' && strUpper[i] <= 'z') {
            strUpper[i]=strUpper[i]-32;
        }
    }
}

int calculator_command_line(int argc, const char *argv[]) {


}

char* string_cat(const char *pstr1, const char *pstr2, char str[]) {


}

char* cat_argv_strings(int argc, const char *argv[], char str[]) {


}

int frequencies_strings_argv(int argc, const char *argv[], int freqs[]) {


}

int sum_all_argv(int argc, const char *argv[]) {


}