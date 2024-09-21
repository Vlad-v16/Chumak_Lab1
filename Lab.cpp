#include <iostream> // Включає функції
#include <windows.h> // Підключає SetConsoleCP та SetConsoleOutputCP
#include <string> // Дає змогу працювати з масивами через string
#include <locale.h> // Включає функцію setlocale

using namespace std; // Дозволяє групувати std, щоб не писати кожен раз 

int main()
{
    SetConsoleCP(1251); // Для введення
    SetConsoleOutputCP(1251); // Для виведення

    setlocale(LC_ALL, "uk_UA"); // Підключає Українську мову

    int year;
    cout << "Введіть рік: ";
    cin >> year;
    if (year % 4 == 0) 
    {         
        cout << "Цей рік є важливим у спортивній історії Олімпійських ігор! " << std::endl;     
    
    }
    else 
    {
        cout << "Цей рік не є важливим у спортивній історії Олімпійських ігор! " << std::endl;
    
    }
    return 0;
}
