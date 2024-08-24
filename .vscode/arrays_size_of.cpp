#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

/*     cout << sizeof(int) << endl;
    cout << sizeof(true) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long) << endl; */
    
/*     const int SIZE = 10;
    int arr[SIZE]; */
    int arr1[]{1,2,3,4,5};

/*     for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    int a = sizeof(arr1);
    int b = sizeof(int);
    cout << "Result = " << a / b << endl; */

    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        cout << "Result = " << arr1[i] << endl;
    }
    
    Sleep(5000);
    // system("pause");

    return 0;
}