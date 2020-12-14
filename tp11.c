//
// Created by Goncalo on 11/30/2020.
//

#include "tp11.h"

int main_tp11(int argc, const char * argv[]) {
    CLASSSTUDENTS turma_lp1 = {"lp1", NULL, 0};
    create_dynarray_classstudents(&turma_lp1,2);
    insert_student_dynarray_classstudents(&turma_lp1, "Goncalo Paiva", 1111, 0.0f);
    insert_student_dynarray_classstudents(&turma_lp1, "Jose Silva", 2222, 0.0f);
    print_dynarray_classstudents(turma_lp1);
    insert_student_dynarray_classstudents(&turma_lp1, "Diogo Ferreira", 3333, 0.0f);
    print_dynarray_classstudents(turma_lp1);
    return 0;
}

void create_dynarray_classstudents(CLASSSTUDENTS *pcs, int initsize) {
    STUDENT *pstudents = (STUDENT *) calloc(initsize, sizeof(STUDENT));
    pcs->pstudents=pstudents;
    (*pcs).nstudents=initsize;
}

void insert_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[], int number, float grade) {
    int i=0;
    STUDENT *pstudent = pcs->pstudents;
    for (i = 0; i < pcs->nstudents ; i++) {
        if (pstudent->pname == NULL) {
            pstudent->pname = (char *) malloc(strlen (name) + 1);
            strcpy(pstudent->pname, name);
            pstudent->number = number;
            pstudent->grade = grade;
            return;
        }
        pstudent++;
    }
    //printf("insert_student_dynarray_classstudents(): %d\n", i);
    if (i == pcs->nstudents) {
        int oldSize = pcs->nstudents, newSize = oldSize + 10;
        //printf("insert_student_dynarray_classstudents(): %d, oldSize=%d, newSize=%d\n", i, oldSize, newSize);
        pcs->pstudents = (STUDENT *) realloc(pcs->pstudents, newSize*sizeof(STUDENT));
        pcs->nstudents = newSize;
        pstudent = pcs->pstudents + oldSize;
        for (i = oldSize; i < newSize; i++) {
            pstudent->pname = NULL;
            pstudent->number = 0;
            pstudent->grade = 0.0f;
            pstudent++;
        }
        pstudent = pcs->pstudents + oldSize;
        pstudent->pname = (char *) malloc(strlen (name) + 1);
        strcpy(pstudent->pname, name);
        pstudent->number = number;
        pstudent->grade = grade;
    }
}

void print_dynarray_classstudents(CLASSSTUDENTS cs) {
    STUDENT *pstudent = cs.pstudents;
    printf("print_dynaray_classstudents(): \t\t\tNAME \t\tNUMBER \t\tGRADE\n");
    for (int i = 0; i < cs.nstudents ; i++) {
        if (pstudent->pname != NULL) {
            printf("print_dynaray_classstudents(): student[%d] = \t%s \t\t%d \t%0.1f\n",i,pstudent->pname, pstudent->number, pstudent->grade);
            pstudent++;
        } else {
            return;
        }
    }
}

STUDENT remove_student_dynarray_classstudents(CLASSSTUDENTS *pcs, char name[]) {
    STUDENT st = {NULL, 0, 0.0f};
    STUDENT *pst = find_student_dynarray_classstudents(*pcs, name);
    if (pst != NULL) {
        st = *pst;
        while (pst < (pcs->pstudents + pcs->nstudents-1) && pst->pname != NULL) {
            *pst = *(pst + 1);
            pst++;
        }
        if (pst == pcs->pstudents + pcs->nstudents - 1) {
            pst->pname = NULL;
            pst->number = 0;
            pst->grade = 0.0f;
        }
    }
    return st;
}

/*void free_dynarray_classstudents(CLASSSTUDENTS *pcs);
    STUDENT *pst = pcs->pstudents;
    if (pst==NULL) {
        printf("free_dynarray_classstudents(): class %s has no students data", pcs->name);
        return;
    }
}
*/

STUDENT* find_student_dynarray_classstudents(CLASSSTUDENTS cs, char name[]) {


}