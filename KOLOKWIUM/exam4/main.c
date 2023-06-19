#include <stdio.h>
#include "my_student.h"
#include "my_array.h"

int main() {
    MY_STUDENT_GROUP* group = create_group();

    MY_STUDENT* student1 = create_student("Kowalski", 2022);
    MY_STUDENT* student2 = create_student("Nowak", 2023);
    MY_STUDENT* student3 = create_student("Wojcik", 2021);

    add_student(group, student1);
    add_student(group, student2);
    add_student(group, student3);

    for (int i = 0; i < group->size; i++) {
        MY_STUDENT* student = group->array[i];
        printf("Student: %s, Start Year: %d\n", student->name, student->start_year);
    }

    delete_group(group);

    return 0;
}
