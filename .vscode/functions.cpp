#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int Sum(int a, int b, int c = 5)
{
    return a + b + c;
}

void foo()
{
    cout << "Я функция, я говорю кря" << endl;
}

int Foo(int a)
{
    return a++; // 1
    return ++a; // 2 
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    std::cout << Sum(2, 3) << std::endl;

    foo();

    int value = 1;

    value = Foo(value);

    cout << value << endl;
    

    system("pause");

    return 0;
}