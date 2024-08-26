#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;


int Foo(int a)
{
    if (a == 0)
    {   
        return 0;
    }
/*     a--;
    cout << a << endl;
    return Foo(a); */

    int result = Foo(a - 1);
    cout << a - 1 << endl;
    return result;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    Foo(5); 

    system("pause");

    return 0;
}