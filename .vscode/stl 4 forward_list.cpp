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

    /*     for (auto i = fl.begin(); i != fl.end(); i++)
        {
            cout << *i << endl;
        } */
    /*
        fl.push_front(77);
        fl.push_front(88); */

    /*     for (auto el: fl)
        {
            cout << el << endl;
        } */

    /*     forward_list<int>::iterator it = fl.before_begin(); // 
    
    до начала коллекции это надо для стирания первого элемента, потому что односвязный список же*/

    forward_list<int>::iterator it = fl.begin(); // коллекции

    /*     it++; */

/*     fl.insert_after(it, 9999); */

    fl.erase_after(it); // удалит следующий элемент после it

    for (auto el : fl)
    {
        cout << el << endl;
    }

    // it--; а вот так нельзя, список односвязный, если надо, то тогда list

/*     cout << *it << endl; */

    system("pause");
    return 0;
}