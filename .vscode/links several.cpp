#include <iostream>
#include <locale>
#include <algorithm>

using namespace std;

template <typename T1,typename T2>
void Template(T1 &a, T2 &b)
{   

    cout << a << endl;
    cout << b << endl;
}

void Foo(int &a, int &b, int &c)
{
    a = 10;
    b *= 2;
    c -= 100;
}

int main()
{

    int a = 0, b = 4, c = 34;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "Foo" << endl;
    Foo(a, b, c);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << Template(a, b) << endl;
    system("pause");
    return 0;
}