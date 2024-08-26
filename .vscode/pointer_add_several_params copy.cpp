#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

void Foo(int *pa, int *pb, int *pc)
{   
    (*pa) = 555;
    (*pb)++;
    (*pc) = -20;
}

void Foo1(int *pa, int *pb)
{   
    (*pa);
    (*pb);
    pa = pb;
    pb = pa;
}

void Foo2(int *pa, int *pb)   
{
    int a = *pa;
    (*pa) = (*pb);
    (*pb) = a;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

/*     int a = 0,b = 0,c = 1;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    Foo(&a, &b, &c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl; */
    int a,b;
    cout << "Enter number \n Число a = " << endl;
    cin >> a;
    cout << "Enter number \n Число b = " << endl;
    cin >> b;
    Foo2(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    system("pause");
    return 0;
}