Lab 00 - Konfiguracja środowiska

Pytania:
1. Znajdź i wypisz wersje standardu języka C.
2. Czym jest kompilator?
3. Opisz czym jest IDE (Zintegrowane środowisko programistyczne). W jaki sposób ułatwia pracę programisty?
4. Wymień konwencje nazewnictwa zmiennych w programowaniu i podaj przykłady.

Zadania (opis dla systemów Windows):
Zainstalować Visual Studio Code
Zainstalować kompilator języka C. Np. Pakiet MinGW zawierający kompilator GCC dla Windows. :warning: Zwróć uwagę na lokalizację zainstalowania pakietu. Będzie ona potrzebna przy kolejnych krokach.
mingw_path
Podczas instalacji w jednym z kroków należy zaznaczyć pakiety które chcemy zainstalować.(wszystkie)
mingw_packages
Po wybraniu pakietów należy kliknąć installation > Apply Changes i potwierdzić wybór.

Aby mieć dostęp do narzędzia GCC z terminala cmd lub powershell ścieżka do pliku musi znajdować się w zmiennych systemowych. Sprawdź, czy polecenie jest dostępne wpisując w terminalu gcc. Jeśli w terminalu pojawia się następujący komunikat pomiń następny krok.
cmd_gcc
Jeśli polecenie gcc nie jest dostępne w menu start znajdź opcję "edit the system enviroment variables" lub w polskiej wersji systemu "edytuj zmienne środowiskowe".

windows_env_variables
W kolejnym oknie wybierz "Enviroment Variables" lub "Zmienne środowiskowe" (przycisk powinien znajdować się w tym samym miejscu niezależnie od wersji systemu Windows)
windows_env_avariables2
Odszukaj zmieną Path i wciśnij edit.
path
W oknie edit kliknij New a potem Browse i znajdź lokalizację pliku gcc.exe (folder bin w folderze, gdzie został zainstalowany MinGW). Przykładowo, jeśli MinGW został zainstalowany w lokalizacji C:\Applications\MinGW wpis do Path powinien wyglądać następująco
new_path
Potwierdź wciskając ok i ponownie przetestuj polecenie gcc w terminalu CMD lub PowerShell. Powinien pojawić się następujący komunikat

cmd_gcc
Utworzyć folder ze swoimi inicjałami oraz numerem albumu na pulpicie a w nim folder lab1. Uruchomić Visual Studio Code a następnie otworzyć utworzony folder lab00.
Utwórz plik myfirstapp.c (pliki źródłowe aplikacji, które wymagają kompilacji mają sufix.c
W utworzonym pliku napisz swój pierwszy program wypisujący napis Hello World! Oraz wersję standardu języka c użytego przy kompilacji.
hello_world.c
Zapisz plik, uruchom terminal, a następnie skompiluj program poleceniem gcc ścieżka_do_programu –o nazwa_pliku_wykonywalnego [1]
Uruchom skompilowany program wpisując jego nazwę w terminalu. Uruchom program drugim sposobem dwukrotnie klikając w plik.
Visual Studio Code jest narzędziem które możemy konfigurować wedle swoich potrzeb dzięki pluginom. Zainstaluj C/C++ Extension Pack. Jedną z jego funkcjonalności jest kolorowanie składni.
c/c++ extension

Dodatek CodeRunner umożliwi skompilowanie aktywnego pliku a następnie uruchomienie wygenerowanego programu.

Skompiluj i uruchom program korzystając z IDE Visual Studio Code dzięki zainstalowanym pluginom. Mając wybraną zakładkę z twoim programem znajdź następującą opcję:
run program

Zmodyfikuj program "zakomentowując" deklarację biblioteki stdlib.h (linie zaczynające się od znaków "//" są komentarzami nie mającymmi wpływu na działanie kodu. Kompilator je pomija).

Uruchom program i znajdź miejsce, w którym jest opisany błąd występujący w programie.

Konfiguracja CodeRunner
Domyślnie dodatek code runner uruchamia program w trybie odczytu. Oznacza to że nie możliwym będzie odczytywanie danych z klawiatury. Aby uzyskać tę możliwość w ustawieniach VSCode należy znaleźć nastepującą opcję:
coderunnderruninterminal

Aby zmodyfikować polecenie kompilujące kod w C należy odszukać opcję:
executormap
a następnie edytować plik settings.json. Przykładowo aby wymusić kompilację kodu do standardu c99 polecenie należy zmodyfikować w nastepujący sposób:
stdc99

Aby wskazać poprawną ścieżkę do kompilatora należy odszukać następujący panel ustawień: gccconfig

A następnie podać ścieżkę do zainstalowanego kompilatora: path
