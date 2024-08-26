#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int Factorial(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return n * Factorial(n - 1);
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");


    cout << Factorial(10) << endl;

    system("pause");

    return 0;
}