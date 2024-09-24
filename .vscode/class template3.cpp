#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

/* Специализация шаблона класса */

template <typename T>
class Printer
{
public:
    void Print(T value)
    {
        cout << value << endl;
    }
};

template <>
class Printer<string>
{
public:
    void Print(string value)
    {
        cout << "________ " << value << " ________" << endl;
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    Printer<int> pr;
    pr.Print(123);
    system("pause");

    return 0;
}