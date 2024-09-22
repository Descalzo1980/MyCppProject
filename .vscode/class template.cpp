#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

/* шаблоны классов */

class Point
{
public:
    Point()
    {
        x = y = x = 0;
    }
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

private:
    int x;
    int y;
    int z;
};

/* template <typename T1,typename T2 = int> */
template <class T1, class T2>
/* template <typename T1, typename T2> */
class MyClass
{
public:
    MyClass(T1 value)
    {
        this->value = value;
    }
    MyClass(T1 value, T2 value2)
    {
        this->value = value;
        this->value2 = value2;
    }
    void DataTypeSize()
    {
        cout << sizeof(value) << endl;
        cout << sizeof(value2) << endl;
    }

private:
    T1 value;
    T2 value2;
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    Point a;
    int b = 7;
    MyClass<Point, int> MyClass(a, b);
    MyClass.DataTypeSize();

    system("pause");

    return 0;
}