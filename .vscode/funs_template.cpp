#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}

double Sum(double a, int b)
{
    return a + b;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    cout << Sum(5,6) << endl;

    cout << Sum(5.1,6.2) << endl;

    system("pause");

    return 0;
}