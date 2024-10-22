#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
#include <stdexcept>
#include <deque>
#include <set>
using namespace std;

/*

Set

Multiset

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    set<int> mySet = {5,4,7,8,22};

    /*     mySet.insert(5);
        mySet.insert(1);
        mySet.insert(2);
        mySet.insert(12);
        mySet.insert(-2);
        mySet.insert(4); бинарное дерево, будет сразу упорядочен
     */
    /*     for (auto &item : mySet)
        {
            cout << item << endl;
        } */

/*     for (int i = 0; i < 20; ++i)
    {
        mySet.insert(rand() % 10);
    }

    for (auto &item : mySet)
    {
        cout << item << endl;
    } */

    auto it = mySet.find(5);

    system("pause");
    return 0;
}