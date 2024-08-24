#include <iostream>
#include <locale>
#include <Windows.h>
#include<ctime>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    srand(time(NULL)); // если убрать это, то числа будут одни и те же

/*     int a = rand() % 10 + 5; 

    cout << a << endl;

    a = rand() % 10 + 5;

    cout << a << endl; */
    int const SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100;

    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;

    }


    Sleep(3000);
    // system("pause");

    return 0;
}