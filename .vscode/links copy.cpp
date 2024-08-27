#include <iostream>
#include <locale>
#include <Windows.h>
#include <algorithm>

using namespace std;

void Foo(int a)
{
    a = 1;
}

void Foo2(int &a)
{
    a = 2;
}

void Foo3(int *a)
{
    *a = 3;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int value = 5;
    cout << "value = " << value << endl << endl;
    cout << "Foo = " << value << endl;
    Foo(value);
    cout << "value = " << value << endl << endl;

    cout << "Foo2 = " << value << endl;
    Foo2(value);
    cout << "value = " << value << endl << endl;

    cout << "Foo3 = " << value << endl;
    Foo3(&value);
    cout << "value = " << value << endl << endl;
    
    system("pause");
    return 0;
}