#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int aaa;

void foo(int aaa)
{

}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int aa;

    if(true)
    {
        int a;

        a = 5;
    }

    for (int i = 0; i < 10; i++)
    {
        int a = 5;
    }
    

    // cout << a << endl; // a is a local scope
    // cout << aa << endl; // a is a global scope
    aaa++;
    foo(aaa);
    cout << aaa << endl;

    system("pause");

    return 0;
}

