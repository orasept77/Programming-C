# **Lab 01 - Zmienne, operatory, instrukcje warunkowe. IN/OUT**

### **Pytania:**
1. Jak działa dyrektywa #include?
2. Czym jest zmienna? Jak deklarujemy zmienne?
3. Typy zmiennych w C
4. Czego potrzebuje program by działać?
5. Czym jest literał?
6. Instrukcje**
7. Budowa funkcji.
8. Operatory:
- przypisania
- artymetyczne
- porównania
- logiczne**
- dostępu**

## Zadania:

Utwórz folder Lab01 na pulpicie, następnie otwórz folder w Visual Studio Code.

### **Zadanie 1 - I/O i zmienne**
Deklaracja zmiennej wygląda następująco `[typ zmiennej] [nazwa zmiennej]; np.:

```
int zmienna1;
```
Tak zainicjowana zmienna obecnie odnosi się do danego miejsca w pamięci komputera w którym bity pamięci są w "losowym stanie".
```
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char const *argv[]) // każdy program musi mieć punkt startu którym domyślnie jest funkcja main.
{
    int a;
    printf("Wartość zmiennej a: %i",a);
    return 0;
}
```
> 2658304
Przy kolejnych uruchomieniach programu możemy dostać inny wynik:

> 3563520
Aby ustawić ciąg bitów w pamięci a tym samym aby nasza zmienna przechowywała wartości przez nas zdefiniowane używamy operatora przypisania =.

```
int a = 3; // W pamięci zostaną ustawione odpowiednio bity dla liczby 3.
printf("Wartość zmiennej a: %i",a);
```
Podstawowe typy zmiennych i literały pozwalające je definiwoać:

```
int liczbaCalkowita = 432871; // typ przechowuje liczby całkowite w danym zakresie
float liczbaZmiennoprzecinkowa = 3.14; // typ przechowuje liczby zmienno przecinkowe w danym zakresie
char znak = 'a'; // typ przechowuje litery, cyfry i znaki specjalne.
double liczbaZmiennoprzechnkowa = 32.32; // yp przechowuje liczby zmienno przecinkowe z dokładnością większą niż float
Stałe definiujemy dopisując przed definicją zmiennej const lub dytektywą #define. Wartości stałej w przeciwieństwie do zmiennej dynamicznej nie możemy pomownie przypisać.

int a = 12;
const B = 54;

// dozwolona jest zmiana wartości a
a = 43;

// nie dozwolone jest przypisanie nowej wartości stałej
// B = 66;
```
Zmienne tablicowe przechowują w nastepujących po sobie adresach pamięci zmienne określonego typu. W ten sposób możemy definiować łańcychy znaków.

```
char string[20]; // utworzenie zmiennej string która przechowuje 20 zmiennych char do których odwołujemy się po indeksach.
string[0] = 'H'; // przypisanie do pierwszego zarezerwowanego adresu litery 'H'
string[1] = 'e';
string[2] = 'l';
string[3] = 'l';
string[4] = 'o';
string[5] = ' ';
string[6] = 'C';
printf("%c", string[6]); // Wypisanie znaku na 7 miejscu w tablicy.
printf("%s",string);
```
Literał ułatwiający przypisanie wartości do kolejnych elementów tablicy(wynik działania programu będzie taki sam jak poprzedniego):

```
char string2[20] = "Hello C";
printf("%s",string2);
```
Interakcja z programem - printf() scanf()
Korzystając z dokumentacji funkcji printf utwórz program task1.exe który przechowuje w następujących zmiennych:

name - imię
surname - nazwisko
age - wiek
albumNumber - numer albumu
PI_VALUE - wartość liczby pi(stała wartość - constant)
a następnie wypisuje w standardowym wyjściu te informacje.

Przypisz zmiennym nowe wartości będące danymi kolegów po twojej lewej i prawej stronie i wypisz te wartości. (Program powinien wypisywać informacje o 3 osobach)

### **Zadanie 2 - Operatory**

Utwórz plik operators.c a następnie wykonaj poniższe polecenia.
Operatory arytmrtyczne:

Symbol	Działanie
+	.
-	.
*	.
/	.
%	.
Utwórz zmienną a = 16 oraz b = 5. Przetestuj działanie kolejnych operatorów w następujący sposób (przykład dla +):
```
int a = 16;
int b = 5;
int result1 = a + b;
printf("Wynik działania 16 + 5 = %i",result1);
```
W jaki inny sposób można zapisać następujący kod?

```
float a = 10;
float b = 4;
a = a / b;
printf("%i", a);
```
Operator przypisania Uzupełnij tabelkę.

Symbol	Działanie
=	.
+=	.
-=	.
*=	.
/=	.
%=	.
Przetestuj działanie operatorów, napisz jak działają w komentarzu. Poniżej przykład użycia operatorów = oraz +=.

```
int a = 16;
int b = 5;
int result1 = a;
printf("result1 = %i",result1);
result1 += b;
printf("result1 += b = %i",result1);
```
Operatory porównania Uzupełnij tabelkę.

Symbol	Działanie
==	.
!=	.
<	.
>	.
<=	.
>=	.
```
int a = 16;
float b = 16;
bool result = a == b;
printf("a == b - %i",a==b)
```
Przetestuj działanie powyższych operatorów. Wyniki wypisz w standardowym wyjściu.

### **Zadanie 3 - I/O**

Zapoznaj się z dokumentacją funkcji scanf() a następnie utwórz program który zapyta użytkownika o wartość liczy a, następnie wartość liczby b po czym wypisze sumę tych dwóch liczb.

### **Zadanie 4 - Instrukcje warunkowe**

Zapoznaj się z dokumentacją instrukcji if oraz switch.
```
if (/* condition */)
{
    /* code */
}
if (/* condition */)
{
    /* code */
}else
{
    /* code */
}
if (/* condition */)
{
    /* code */
}else if (/* condition */)
{
    /* code */
}else if (/* condition */)
{
    /* code */
}else if (/* condition */)
{
    /* code */
}else
{
    /* code */
}
```

Napisz program który prosi użytkownika o wpisanie liczby a nastepnie sprawdza czy podana liczba jest podzielna przez 2 i wypisuje odpowiednią informacje.

Napisz program który prosi użytkownika o dwie wartości liczbowe oraz jedną znakową + - * lub /. Używając instrukcji switch wykonaj obliczenia w zależności od wyboru użytkownika.

### **Zadanie 5**

utwórz plik arguments.c a w nim umieść poniższy kod:
```
int main(int argc, char const *argv[])
{
    printf("argc = %d\n", argc);
    printf("argv[0] = %s\n",argv[0]);
    printf("argv[1] = %s\n",argv[1]);
    printf("argv[1] = %s\n",argv[2]);
    return 0;
}
```
Skompiluj kod do pliku uruchomieniowego arguments.exe. Uruchom kod poleceniem arguments.exe 12 cześć "hello world"

Przetestuj działanie kodu uruchamiając program z róznymi argumentami np. arguments.exe 1 2 3 4(W jaki sposób odczytać wartość "4" z tego polecenia?), w komentarzu napisz co przechowuje zmienna argc oraz argv.

### **Zadanie 6**
Napisz program delta.exe przyjmujący parametry a b c który wypisze w standardowym wyjściu wartość delty.
