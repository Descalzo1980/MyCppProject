#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <list>
using namespace std;

/*

STL

list

*/

template <typename T>
void Print(const list<T> &lst)
{
    for (auto i = lst.cbegin(); i != lst.cend(); ++i)
    {
        cout << *i << endl;
    }
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    list<int> myList = {55, 12, 33, 55, 55, 44, 55};

    /*     myList.push_back(5);
        myList.push_front(151);

        for (auto i = myList.begin(); i != myList.end(); i++)
        {
            cout << *i << endl;
        }

        list<int>::iterator it = myList.begin();

        myList.sort();

        myList.pop_back();
        myList.pop_front();

        cout << *it << endl;

        cout << myList.size() << endl; */

    /*     Print(myList);

        myList.unique();


        Print(myList);

        myList.clear(); */

    auto it = myList.begin();

    advance(it, 3);

    cout << "before insert" << endl;
    Print(myList);
    myList.insert(it, 101);

    cout << "after insert" << endl;
    Print(myList);

    cout << "remove" << endl;
    myList.remove(101);
    Print(myList);

    cout << "assign" << endl;
    myList.assign(3, 66666666);
    Print(myList);
    system("pause");
    return 0;
}