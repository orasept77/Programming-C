# **Lab 00 - Konfiguracja środowiska**

## Pytania 
- Znajdź i wypisz wersje standardu języka C. 
- Czym jest kompilator? 
- Opisz czym jest IDE (Zintegrowane środowisko programistyczne). W jaki sposób ułatwia pracę programisty? 
- Wymień konwencje nazewnictwa zmiennych w programowaniu i podaj przykłady. 

## Zadania (opis dla systemów Windows): 

- Zainstalować [Visual Studio Code](https://code.visualstudio.com) 
- Zainstalować kompilator języka C. Np. Pakiet [MinGW](https://sourceforge.net/projects/mingw/) zawierający kompilator GCC dla Windows. 
:warning: Zwróć uwagę na lokalizację zainstalowania pakietu. Będzie ona potrzebna przy kolejnych krokach.
<br>![mingw_path]([images/lab0mingwpath.png)
- Podczas instalacji w jednym z kroków należy zaznaczyć pakiety które chcemy zainstalować.(wszystkie)
<br>![mingw_packages](images/lab0mingwpickpackages.png)
- Po wybraniu pakietów należy kliknąć **installation > Apply Changes** i potwierdzić wybór.
<br>![](images/lab0mingwinstallpackages.png)
- Aby mieć dostęp do narzędzia GCC z terminala cmd lub powershell ścieżka do pliku musi znajdować się w zmiennych systemowych. Sprawdź, czy polecenie jest dostępne wpisując w terminalu `gcc`. **Jeśli w terminalu pojawia się następujący komunikat pomiń następny krok.** 
<br>![cmd_gcc](images/lab0mingwcheckgcc.png)
- Jeśli polecenie gcc nie jest dostępne w menu start znajdź opcję "edit the system enviroment variables" lub w polskiej wersji systemu "edytuj zmienne środowiskowe".  
<br>![windows_env_variables](images/lab0edit_env_variables.png)
    - W kolejnym oknie wybierz "Enviroment Variables" lub "Zmienne środowiskowe" (przycisk powinien znajdować się w tym samym miejscu niezależnie od wersji systemu Windows)
    <br>![windows_env_avariables2](images/lab0edit_env_var2.png)
    - Odszukaj zmieną Path i wciśnij edit.
    <br>![path](images/lab0path.png) 
    - W oknie edit kliknij **New** a potem **Browse** i znajdź lokalizację pliku gcc.exe (folder bin w folderze, gdzie został zainstalowany MinGW). Przykładowo, jeśli MinGW został zainstalowany w lokalizacji C:\Applications\MinGW wpis do Path powinien wyglądać następująco
    <br>![new_path](images/lab0new_path.png)
    - Potwierdź wciskając ok i ponownie przetestuj polecenie gcc w terminalu CMD lub PowerShell. Powinien pojawić się następujący komunikat  
    <br>![cmd_gcc](images/lab0mingwcheckgcc.png)
- Utworzyć folder ze swoimi inicjałami oraz numerem albumu na pulpicie a w nim folder lab1. Uruchomić Visual Studio Code a następnie otworzyć utworzony folder lab1. 
- Utwórz plik myfirstapp.c (pliki źródłowe aplikacji, które wymagają kompilacji mają sufix .c [[1]](https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html) [[2]](https://www.doc.ic.ac.uk/lab/cplus/cstyle.html#N10081)) 
- W utworzonym pliku napisz swój pierwszy program wypisujący napis `Hello World!` Oraz wersję standardu języka c użytego przy kompilacji. 
<br>![hello_worldc](images/lab0hello_world.png)
- Zapisz plik, uruchom terminal, a następnie skompiluj program poleceniem `gcc ścieżka_do_programu –o nazwa_pliku_wykonywalnego` [[1]](https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html)
- Uruchom skompilowany program wpisując jego nazwę w terminalu. Uruchom program drugim sposobem dwukrotnie klikając w plik. 

***

- Visual Studio Code jest narzędziem które możemy konfigurować wedle swoich potrzeb dzięki pluginom. Zainstaluj C/C++ Extension Pack. Jedną z jego funkcjonalności jest kolorowanie składni. 
<br>![c/c++ extension](images/lab0extension.png)
- Dodatek [CodeRunner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) umożliwi skompilowanie aktywnego pliku a następnie uruchomienie wygenerowanego programu.

- Skompiluj i uruchom program korzystając z IDE Visual Studio Code dzięki zainstalowanym pluginom. Mając wybraną zakładkę z twoim programem znajdź następującą opcję:
<br>![run program](images/lab0runprogram.png)
- Zmodyfikuj program "zakomentowując" deklarację biblioteki stdlib.h (linie zaczynające się od znaków "//" są komentarzami nie mającymmi wpływu na działanie kodu. Kompilator je pomija).  
<br>![error](images/lab0programwith_error.png)
- Uruchom program i znajdź miejsce, w którym jest opisany błąd występujący w programie.


## Konfiguracja CodeRunner

Domyślnie dodatek code runner uruchamia program w trybie odczytu. Oznacza to że nie możliwym będzie odczytywanie danych z klawiatury. Aby uzyskać tę możliwość w ustawieniach VSCode należy znaleźć nastepującą opcję:<br>
![coderunnderruninterminal](images/coderunnerruninterminal.png)

Aby zmodyfikować polecenie kompilujące kod w C należy odszukać opcję:<br>
![executormap](images/executormap.png)
<br> a następnie edytować plik settings.json. Przykładowo aby wymusić kompilację kodu do standardu c99 polecenie należy zmodyfikować w nastepujący sposób:<br>
![stdc99](images/stdc99.png)

Aby wskazać poprawną ścieżkę do kompilatora należy odszukać następujący panel ustawień:
![gccconfig](images/customconfigc.png)

A następnie podać ścieżkę do zainstalowanego kompilatora:
![path](images/c_cpp_config_path.png)

## Po zakończonej pracy:
1. Zapisz swoje rezultaty
2. Usuń utworzone pliki z pulpitu
