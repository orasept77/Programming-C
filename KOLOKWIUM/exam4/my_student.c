#include <stdlib.h>
#include <string.h>
#include "my_student.h"

// Funkcja do tworzenia nowego studenta
MY_STUDENT* create_student(const char* name, int start_year) {
    MY_STUDENT* student = (MY_STUDENT*) malloc(sizeof(MY_STUDENT));
    student->name = strdup(name);
    student->start_year = start_year;
    return student;
}

// Funkcja do usuwania studenta
void delete_student(MY_STUDENT* student) {
    free(student->name);
    free(student);
}
