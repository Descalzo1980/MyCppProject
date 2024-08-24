#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const int size = 5;
    int arr[size]{33,44,55,66,77};

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    


    
    Sleep(5000);
    // system("pause");

    return 0;
}