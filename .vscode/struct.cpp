#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

/* Структуры */

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

class MyClass
{
    int a = 10;
    void Print()
    {
        cout << a << endl;
    }
};

class MyClass2 : MyClass // public становится private
{
    int a = 10;
    void Print()
    {
        cout << a << endl;
    }
};

struct MyStruct
{
    // тут всё доступное
    int a = 22;
    void Print()
    {
        cout << a << endl;
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    MyClass mc;
    MyStruct ms;

    // mc.a фигос без явного public будет private
    // ms.Print фигос без явного public будет private
    ms.a; // тут всё public по умолчанию
    ms.Print(); // тут всё public по умолчанию
    system("pause");

    return 0;
}