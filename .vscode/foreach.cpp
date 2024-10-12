#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <list>
#include <vector>
using namespace std;

/*

foreach
range-based
*/

template <typename T>
void PrintList(const list<T> &lst)
{
    for (auto i = lst.cbegin(); i != lst.cend(); i++)
    {
        cout << *i << endl;
    }
    
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double arr[] = {45, 364, 17, 53, 790, 52};
    string arr1[] = {"Ololo", "First", "Second", "Last"};

    list<int> myList = {45, 364, 17, 53, 790, 52};

    for (auto var : arr)
    {
        cout << var << endl;
    }

    cout << "Print String" << endl
         << endl;

    for (auto var : arr1)
    {
        cout << var << endl;
    }

    cout << "Print &var" << endl
         << endl;

    for (const auto &var : myList)
    {
        //var = 0;
        cout << var << endl;
    }

    system("pause");
    return 0;
}