#ifndef MY_STUDENT_H
#define MY_STUDENT_H

// Struktura reprezentująca studenta
typedef struct {
    char* name;      // Nazwisko studenta
    int start_year;  // Rok rozpoczęcia studiów
} MY_STUDENT;

// Funkcja do tworzenia nowego studenta
MY_STUDENT* create_student(const char* name, int start_year);

// Funkcja do usuwania studenta
void delete_student(MY_STUDENT* student);

#endif
