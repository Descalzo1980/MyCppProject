#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

void FillArray(int arr[], const int size)
{
    int a = sizeof(arr); // 4
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const int SIZE = 10;
    int arr[SIZE];

    int a = sizeof(arr); // 40

    FillArray(arr, SIZE);

    PrintArray(arr, SIZE);
    

    system("pause");

    return 0;
}