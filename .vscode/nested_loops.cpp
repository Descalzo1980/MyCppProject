#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    setlocale(LC_ALL, "ru_RU.UTF-8");

    for (int i = 1; i < 5; i++)
    {
        cout << "сработал 1й цикл for итерации № " << i << endl;
        for (int j = 1; j < 5; j++)
        {
            cout << "\tсработал 2й цикл for итерации № " << j << endl;
        }
    }

    Sleep(5000);

    return 0;
}