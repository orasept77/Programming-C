#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include "my_student.h"

// Struktura reprezentująca grupę studentów
typedef struct {
    MY_STUDENT** array;  // Tablica dynamiczna
    int size;            // Rozmiar tablicy
} MY_STUDENT_GROUP;

// Funkcja do tworzenia nowej grupy
MY_STUDENT_GROUP* create_group();

// Funkcja do dodawania studenta do grupy
void add_student(MY_STUDENT_GROUP* group, MY_STUDENT* student);

// Funkcja do usuwania grupy
void delete_group(MY_STUDENT_GROUP* group);

#endif
