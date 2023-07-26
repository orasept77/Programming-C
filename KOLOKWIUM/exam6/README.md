# Kolokwium 6

Stworzyć obsługę struktury danych,,stos".
## Wymagania.
### 1. Projekt powinien być wykonany w IDE VS 2017.

### 2. Projekt powinien zawierać:
  a. Obsługę błędów i komunikatów.
  b. Obsługę stosu (Inicjowanie stosu, zwolnienie stosu, dodawanie nowego elementu, pobieranie pierwszego elementu, odnalezienie podanego elementu', zapis wszystkich elementów stosu na dysk w plik binarny, odczyt z dysku). Przy tym obsługa stosu nie powinna zależeć od typu danych,          umieszczonych w stosie. Użyć dla tego wskaźnik void
  *. Łączenie elementów w stos powinno odbywać się przez wskaźniki (Nie używać stosu tworzonego na podstawie tablicy!).
  c. Interfejs. Każda procedura z obsługi stosu powinna być wywołana z odpowiedniej
  funkcji interfejsu. W dodatek do tego interfejs powinien wyprowadzać na monitor
  elementy stosu oraz menu.
  d. Dane. Powinni być przedstawione w postaci struktury i zawierać funkcji obsługi (zapis/odczyt pojedynczego obiektu na/z dysku, wyprowadzenie na monitor, inicjowanie obiektu oraz zwolnienie pamięci, funkcji porównywania według podanego kryterium przy poszukiwaniu i t. d.).

### 3. Każda składowa projektu (a, b, c, d) powinna być przedstawiona w postaci oddzielnej pary plików (cpp, h), przy czym dane powinni być zamknięte w pliku, a używane w innych plikach tylko poprzez funkcje. Wszystkie funkcje dla każdej ze składowych projektu powinni być rozdzielone na funkcje zewnętrzne (będą wykorzystane w innych plikach) i wewnętrzne (tylko w pliku, który obsługuje te dane). Funkcje wewnętrzne powinni być zamknięte w odpowiednich plikach.

### 4. Użyć strukturę danych MY STUDENT, która zawiera nazwisko studenta (wiersz tekstowy), rok urodzenia (int) i kierunek studiów (element enum, który wskazuje do tablicy wierszy tekstowych z nazwami poszczególnych kierunków). Wiersz tekstowy,,nazwisko studenta" powinien być alokowany dynamicznie o rozmiarze, odpowiadającym ilości znaków w nazwisku
