# **Przykładowy Projekt: Prosty Kalkulator w Języku C**

### Ten projekt to prosty kalkulator, napisany w języku C. Program obsługuje cztery podstawowe działania matematyczne: dodawanie, odejmowanie, mnożenie i dzielenie. Ponadto, zaimplementowano obsługę błędów, takich jak dzielenie przez zero czy wprowadzanie nieprawidłowych danych wejściowych.

### Kod został zoptymalizowany pod kątem zwiększenia wydajności i łatwości rozszerzania funkcjonalności. Zastosowano też dobry styl programowania w C, co ułatwia zrozumienie kodu.

## **Funkcje:**

- Dodawanie
- Odejmowanie
- Mnożenie
- Dzielenie

Obsługa błędów (dzielenie przez zero, nieprawidłowe dane wejściowe)

## Uruchomienie programu:

Sklonuj repozytorium: 
```
git clone https://github.com/dawidolko/Programming-C/projects/Calculator.git
```

Przejdź do katalogu projektu: 
```
cd simple-calculator-c
```
Skompiluj program za pomocą kompilatora gcc:
```
gcc main.c -o calculator
```
Uruchom program: 
```
./calculator
```

## Wprowadzanie danych:

Po uruchomieniu programu wprowadź dwa liczby i operację, którą chcesz wykonać. Na przykład, aby dodać 2 i 3, wpisz: 2 + 3.

## Obsługa błędów:
Program obsługuje dwa typy błędów: dzielenie przez zero i nieprawidłowe dane wejściowe. Jeśli wprowadzisz dane, które program nie może obsłużyć, wyświetli komunikat o błędzie i zakończy działanie.

Dzielenie przez zero: Jeśli spróbujesz podzielić liczbę przez zero, program wyświetli komunikat o błędzie: Error: Division by zero.

Nieprawidłowe dane wejściowe: Jeśli wprowadzisz dane, które program nie rozpoznaje (np. literę zamiast liczby), program wyświetli komunikat o błędzie: Error: Invalid input.

## Przyszłe ulepszenia:
W przyszłości planuję rozszerzyć funkcjonalność kalkulatora, dodając obsługę bardziej zaawansowanych operacji matematycznych, takich jak pierwiastkowanie, potęgowanie, logarytmy itp.
