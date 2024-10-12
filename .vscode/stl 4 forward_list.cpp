#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <forward_list>
using namespace std;

/*

STL

forward_list

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    forward_list<int> fl = {1, 2, 3, 4, 5};

    for (auto i = fl.begin(); i != fl.end(); i++)
    {
        cout << *i << endl;
    }

    fl.push_front(77);
    fl.push_front(88);

    for (auto i = fl.begin(); i != fl.end(); i++)
    {
        cout << *i << endl;
    }

    system("pause");
    return 0;
}