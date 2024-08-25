#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

void foo(int q, int a = 10, double b = 0.5) // параметры по умолчанию указываются в конце
{
    for (int i = 0; i < a; i++)
    {
        cout << "#" << endl;
    }
    
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");


    foo(5);

    system("pause");

    return 0;
}

