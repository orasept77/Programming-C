# Kolokwium 5

Utworzyć obiekt `MY_BIKE`, który zawiera nazwę modelu (użyć dynamiczne alokowanie pamięci), 
rok produkowania i cenę. Obsługa obiektu (pliki `my_bike.h` i `my_bike.c`) powinna zawierać zapis 
obiektu `MY_BIKE` do pliku binarnego i jego odczyt. W celu uniknięcia zapisu wskaźnika do nazwy 
modelu tworzymy strukturą pomocniczą MY_BIKE_SERIALIZE, w której umieszczamy wszystkie 
składowe, przeznaczone dla zapisu-odczytu. Natomiast pozostałe składowe (na przykład, wskaźnik do 
wiersza tekstowego) umieszczamy bezpośrednio w polu definicji struktury MY_BIKE:
```
struct MY_BIKE
{
 MY_BIKE_SERIALIZE data_bike_ser; //Dane przeznaczone dla zapisu-odczytu
 wchar_t *model_name; //Pozostałe dane
};
```
Dla wiersza tekstowego używamy typ wchar_t oraz wykorzystujemy funkcji wymienione w tabele 1.

Tabela 1 (#include <string.h>) Funkcje obsługi wierszy tekstowych dla typów char i wchar_t
```
typ char wchar_t
```
Deklaracja stałego wiersza 
tekstowego
```
char str[] = ”wiersz”; wchar_t wstr[] = L”wiersz”;
```
Ile znaków zawiera wiersz 
tekstowy?
```
size_t len = strlen(str); rsize_t wlen = wcslen(wstr);
```
Kopiowanie wiersza 
tekstowego
```
#pragma warning (disable :
4996)
char *strcpy( char 
*strDestination, const 
char *strSource );
wchar_t *wcscpy( wchar_t 
*strDestination, const wchar_t 
*strSource ); 
Wyprowadzenie wiersza 
tekstowego
char text[] = ”abcdef”;
printf("\n%s\n", text);
wchar_t text[] = L”abcdef”;
wprintf(L"\n%s\n", text);
```
Przy zapisie-odczycie uczestniczy tylko `data_bike_ser`. W taki sposób obchodzimy zapis-odczyt 
składowych, wartości których po odczycie mogą być nieaktualne. Zapisujemy i odczytujemy 
data_bike_ser jako cały obiekt (unikamy zapisu składowa-po-składowej). Obiekt MY_BIKE 
tworzy się dynamicznie i nie wie, jak on będzie używany, dla tego powinien przewidywać użycie w 
trybie dowolnym. Oznacza to, że dealokator tego obiektu powinien zwolnić całą pamięć, alokowaną 
dynamicznie. 

### W funkcji main:

1. Utworzyć dwa obiekty MY_BIKE.

2. Wyprowadzić ich na monitor.

3. Zapisać do pliku binarnego.

4. Zwolnić pamięć dla tych obiektów.

5. Odczytać dane z pliku binarnego. Powinni powstać dwa obiekty MY_BIKE.

6. Wyprowadzić ich na monitor.

7. Przypisać jeden obiekt do drugiego.

8. Wyprowadzić ich na monitor.

9. Zwolnić pamię
