#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
using namespace std;

/* Умный указатель 2*/

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


    int *p = new int(5);
/*     unique_ptr<int> p1(p);

    p1.release();
    p1.reset(); */

    shared_ptr<int> p1(new int(5));
    shared_ptr<int> p2(p1);

    system("pause");
    return 0;
}