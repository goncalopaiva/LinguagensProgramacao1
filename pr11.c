//
// Created by Goncalo on 12/4/2020.
//

#include "pr11.h"

void insert_student_ordered(CLASSSTUDENTS *pcs, char name[], float grade, int number) {
    STUDENT *new = (STUDENT *) malloc (sizeof(STUDENT));
    new -> pname = (char *) malloc (sizeof(char) * strlen(name) + 1);
    strcpy ( new -> pname, name );
    new -> number = number;
    new -> grade = grade;
    new -> pnext = NULL;
    if (pcs -> pstudents == NULL || pcs -> nstudents == 0) {
        pcs -> pstudents = new;
        pcs -> nstudents++;
        return;
    }
    STUDENT *pcurrent = pcs -> pstudents, *pant = NULL;
    while (pcurrent != NULL && strcmp(name, pcurrent -> pname) > 0) {
        pant = pcurrent;
        pcurrent = pcurrent -> pnext;
    }
    if (pcurrent == pcs -> pstudents) { //HEAD
        new -> pnext = pcurrent;
        pcs -> pstudents = new;
        pcs -> nstudents++;
        return;
    }
    //TAIL E MIDDLE
    pant -> pnext = new;
    new -> pnext = pcurrent;
    pcs -> nstudents++;
}

void remove_student_ordered(CLASSSTUDENTS *pcs, char name[]) {
    if (pcs -> pstudents == NULL) { //EMPTY
        return;
    }
    STUDENT *pend = NULL, *pcurrent = pcs->pstudents;
    while (pend != NULL && strcmp(name, pcurrent -> pname) != 0) {
        pend = pcurrent;
        pcurrent = pcurrent->pnext;
    }
    if (pcurrent == pcs -> pstudents) { //HEAD
        pcs -> pstudents = pcurrent -> pnext;
        free(pcurrent);
        pcs -> nstudents--;
    }
    if (pcurrent == NULL) { //DOES NOT EXIST
        return;
    }
    pend -> pnext = pcurrent -> pnext;
    free (pcurrent);
    pcs -> nstudents --;
}

STUDENT* find_student_ordered(CLASSSTUDENTS cs, char name[]) {


}

float get_avg_class_grade(CLASSSTUDENTS cs) {


}

float get_student_grade_ordered(CLASSSTUDENTS cs, char name[]) {


}

void print_students(CLASSSTUDENTS cs) {
    STUDENT *paux = cs.pstudents;
    printf("NOME \t\tGRADE \t\tNUMBER\n");
    while (paux != NULL) {
    printf("%s \t\t%0.2f \t\t%d\n",paux->pname, paux->grade, paux->number);
    paux = paux->pnext;
    }
}