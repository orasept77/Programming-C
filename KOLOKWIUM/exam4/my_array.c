#include <stdlib.h>
#include "my_array.h"
#include "my_student.h"

// Funkcja do tworzenia nowej grupy
MY_STUDENT_GROUP* create_group() {
    MY_STUDENT_GROUP* group = (MY_STUDENT_GROUP*) malloc(sizeof(MY_STUDENT_GROUP));
    group->array = malloc(sizeof(MY_STUDENT*));
    group->size = 0;
    return group;
}

// Funkcja do dodawania studenta do grupy
void add_student(MY_STUDENT_GROUP* group, MY_STUDENT* student) {
    group->size++;
    group->array = realloc(group->array, group->size * sizeof(MY_STUDENT*));
    group->array[group->size - 1] = student;
}

// Funkcja do usuwania grupy
void delete_group(MY_STUDENT_GROUP* group) {
    for (int i = 0; i < group->size; i++) {
        delete_student(group->array[i]);
    }
    free(group->array);
    free(group);
}
