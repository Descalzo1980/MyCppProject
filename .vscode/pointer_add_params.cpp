#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

void Foo(int *pa)
{   
    (*pa)++;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 0;
    cout << a << endl;

    Foo(&a);

    cout << a << endl;

    system("pause");

    return 0;
}