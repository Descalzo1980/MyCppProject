#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");


    int arr[4];
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 6;
    arr[3] = 3333;
    cout << arr[10] << endl;
    
    Sleep(5000);
    // system("pause");

    return 0;
}