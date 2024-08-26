#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const int SIZE = 5;
    int arr[SIZE]{1,2,3,4,5};

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "================================================"<< endl;

    int *pArr = arr;

    cout << "arr\t" << arr << endl;
    cout << "*pArr\t" << pArr << endl;
    cout << "================================================"<< endl;

/*     for (int i = 0; i < SIZE; i++)
    {
        cout << pArr[i] << endl;
        cout << *(pArr+i) << endl; // аналогичная фигня, арифметика указателей
    } */

        for (int i = 0; i < SIZE; i++)
    {
        cout << (arr+i) << endl; // список адресов со сдвигом на 4 байта, поскольку тип int
    }

    system("pause");

    return 0;
}