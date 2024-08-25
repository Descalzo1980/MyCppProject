#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

void foo(); // прототип
void foo(int a, int b); // прототип

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    
    foo();
    foo(4,5);

    system("pause");

    return 0;
}

void foo()
{
    cout << "Я функция и я говорю кря" << endl;
}

void foo(int a, int b)
{
    cout << "Я функция и я говорю кря с параметрами" << endl;
}
