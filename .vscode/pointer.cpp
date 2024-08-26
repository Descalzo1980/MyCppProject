#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 5;

    int *px = &a;

    /* double *px = &aa; ошибка*/

    int *px2 = &a;

    cout << "a = " << a << endl; // 5

    cout << px << endl; // 
    cout << px2 << endl; // 
    // Печатает адрес памяти, который может 
    // меняться 0x5ffe94 или что то другое, 
    // зависит от области памяти
    cout << "*px " << *px << endl; // 5 разыменование
    cout << "*px2 " << *px2 << endl; // 5 разыменование
    

    *px2 = 2;

    cout << "a = " << a << endl; // 2
    cout << "*px = " << *px << endl; 
    system("pause");

    return 0;
}