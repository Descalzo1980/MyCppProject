#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

/* Умный указатель */

template <typename T>
class SmartPointer
{
private:
    T *ptr;

public:
    SmartPointer(T *ptr)
    {
        this->ptr = ptr;
        cout << "Constructor" << endl;
    }
    ~SmartPointer()
    {
        delete ptr;
        cout << "Destructor" << endl;
    }

    T &operator*()
    {
        return *ptr;
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    /*     int *ptr = new int(5);

        cout << ptr << endl;
        cout << *ptr << endl;

        delete ptr; */

    SmartPointer<int> pointer = new int(42);

    *pointer = 88005553535;

    cout << *pointer << endl;

    system("pause");
    return 0;
}