#include "my_bike.h"
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Set the locale for wide character support

    // 1. Utworzyć dwa obiekty MY_BIKE.
    struct MY_BIKE *bike1 = (struct MY_BIKE *)malloc(sizeof(struct MY_BIKE));
    bike1->data_bike_ser.year_of_production = 2023;
    bike1->data_bike_ser.price = 1999.99;
    bike1->model_name = (wchar_t *)malloc((wcslen(L"Model 1") + 1) * sizeof(wchar_t));
    wcscpy(bike1->model_name, L"Model 1");

    struct MY_BIKE *bike2 = (struct MY_BIKE *)malloc(sizeof(struct MY_BIKE));
    bike2->data_bike_ser.year_of_production = 2022;
    bike2->data_bike_ser.price = 1799.99;
    bike2->model_name = (wchar_t *)malloc((wcslen(L"Model 2") + 1) * sizeof(wchar_t));
    wcscpy(bike2->model_name, L"Model 2");

    // 2. Wyprowadzić ich na monitor.
    printf("Bike 1: Model: %ls, Year: %d, Price: %.2f\n", bike1->model_name, bike1->data_bike_ser.year_of_production, bike1->data_bike_ser.price);
    printf("Bike 2: Model: %ls, Year: %d, Price: %.2f\n", bike2->model_name, bike2->data_bike_ser.year_of_production, bike2->data_bike_ser.price);

    // 3. Zapisać do pliku binarnego.
    save_bike_to_file("bikes.bin", bike1);
    save_bike_to_file("bikes.bin", bike2);

    // 4. Zwolnić pamięć dla tych obiektów.
    free_bike(bike1);
    free_bike(bike2);

    // 5. Odczytać dane z pliku binarnego. Powinni powstać dwa obiekty MY_BIKE.
    bike1 = load_bike_from_file("bikes.bin");
    bike2 = load_bike_from_file("bikes.bin");

    // 6. Wyprowadzić ich na monitor.
    printf("Loaded Bike 1: Model: %ls, Year: %d, Price: %.2f\n", bike1->model_name, bike1->data_bike_ser.year_of_production, bike1->data_bike_ser.price);
    printf("Loaded Bike 2: Model: %ls, Year: %d, Price: %.2f\n", bike2->model_name, bike2->data_bike_ser.year_of_production, bike2->data_bike_ser.price);

    // 7. Przypisać jeden obiekt do drugiego.
    *bike2 = *bike1;

    // 8. Wyprowadzić ich na monitor.
    printf("Bike 1: Model: %ls, Year: %d, Price: %.2f\n", bike1->model_name, bike1->data_bike_ser.year_of_production, bike1->data_bike_ser.price);
    printf("Bike 2: Model: %ls, Year: %d, Price: %.2f\n", bike2->model_name, bike2->data_bike_ser.year_of_production, bike2->data_bike_ser.price);

    // 9. Zwolnić pamięć.
    free_bike(bike1);
    free_bike(bike2);

    return 0;
}
