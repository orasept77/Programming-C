# Kolowkium 4

Utworzyć obiekt `MY_STUDENT`, który zawiera nazwisko studenta (użyć dynamiczne alokowanie pamięci) i rok rozpoczęcia studiów.
Obsługę studenta umieścić w plikach `my_student.h` i `my_student.cpp`. Obiekt `MY_STUDENT` nie wie, jak on będzie używany, dla tego
powinien przewidywać użycie w trybie dowolnym. Oznacza to, że dealokator tego obiektu powinien zwolnić całą pamięć, alokowaną
dynamicznie.
Utworzyć tablicę dynamiczną `MY_STUDENT_GROUP`, każdy element której zawiera wskaźnik typu void * dla przechowywania danych.
Tablica – KONTENER `MY_STUDENT_GROUP` powstaje przy dynamicznym alokowaniu pamięci i nie zależy od typu
przechowywanych danych. Obsługę tablicy umieścić w plikach `my_array.h` i `my_array.cpp`. Tablica – kontener nie zależy od danych, więc
to oznacza, że dealokator tablicy powinien w całości zwolnić pamięć, alokowaną dynamicznie dla każdego obiektu. Przy tym zwolnienie
obiektów danych, które byli dodane do tablicy, nie powinno uszkodzić dane, przechowywane w tablice, i na odwrót.
Na przykład, tworzymy obiekt `MY_DATA *ptrdat = CreateData(.....);` i dokładamy do tablicy-kontenera. Teraz powinni mieć dwie
niezależne kopie danych – w elemencie tablicy i obiekt ptrdat. Zwolnienie elementu tablicy nie uszkadza ptrdat, i zwolnienie ptrdat nie
uszkadza elementu tablicy.
Obiekty `MY_STUDENT` oraz `MY_STUDENT_GROUP` powstają dynamicznie.

W funkcji main:
## 1. Utworzyć tablicę dynamiczną, przy czym pierwotny rozmiar przyjąć 1.

## 2. Utworzyć trzy obiekty `MY_STUDENT` i dołożyć do tablicy dynamicznej.

## 3. Zwolnić pamięć dla trzech obiektów `MY_STUDENT`. Przy tym to zwolnienie pamięci nie powinno uszkodzić danych, które
znajdują się w KONTENERZE.

## 4. Wyprowadzić z KONTENERA dane na monitor.

## 5. Zwolnić pamięć dla tablicy dynamicznej.

Nie zmieniamy kolejności zadań 1, 2, 3, … .
Specyfikacja do zadania powinna być ścisłe wykonana!
