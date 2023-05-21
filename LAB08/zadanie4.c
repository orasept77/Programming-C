#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
	// Tworzenie tablicy z 10 elementami typu var
	int size = 10; 
	int *array = (int*) malloc(size * sizeof(int)); 
  
	// Wypełnianie tablicy wartościami liczb od 1 do 10
	for (int i=0; i<size; i++) 
		array[i] = i+1;
	
	// Wyświetlanie wypełnionej tablicy
	for (int i=0; i<size; i++) 
		printf("array[%d] = %d\n", i, array[i]); 
	
	// Używanie unii do dynamicznej alokacji pamięci 
	union { 
		int *array; 
		char *str; 
	} u; 
	
	u.array = array; 
	
	// Wypełnienie tablicy wartościami A, B, C ...
	for (int i=0; i<size; i++) 
		u.str[i] = 65 + i;
	
	// Wyświetlanie wypełnionej tablicy
	for (int i=0; i<size; i++) 
		printf("array[%d] = %c\n", i, u.str[i]); 
	
	return 0; 
}