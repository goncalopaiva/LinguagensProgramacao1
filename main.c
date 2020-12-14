//--->TP
#include "tp11.h"


//--->PL
#include "pr11.h"



int main(int argc, const char* argv[]) {
    CLASSSTUDENTS turma = {"LP1", NULL, 0};
    insert_student_ordered(&turma, "A", 16.0, 1);
    insert_student_ordered(&turma, "B", 17.0, 2);
    insert_student_ordered(&turma, "C", 16.9, 3);
    print_students(turma);
}
