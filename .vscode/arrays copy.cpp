#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");


    int arr[] = {1,66,7,88,9}; // old
    int arr[4]{1,66,7,88};
    int arr[4]{};//without garbage
    //int arr[5]{1,66,7,88,66,77};// too many

    cout << arr[2] << endl;


    
    Sleep(5000);
    // system("pause");

    return 0;
}