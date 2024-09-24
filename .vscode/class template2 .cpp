#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

/* наследование шаблонов */
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
template <class T1>
class TypeSize
{
public:
    TypeSize(T1 value)
    {
        this->value = value;
    }

    void DataSizeType()
    {
        cout << sizeof(value) << endl;
    }

protected:
    T1 value;
};

template <class T1>
class TypeInfo : public TypeSize<T1>
{
public:
    TypeInfo(T1 value) : TypeSize<T1>(value)
    {
        
    }
    void ShowTypeName()
    {
        cout << "Название типа " << typeid(TypeSize<T1>::value).name() << endl;
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

/*     double b = 7; */
    Point p;
    TypeInfo<Point> ti(p);
    ti.DataSizeType();
    ti.ShowTypeName();

    system("pause");

    return 0;
}