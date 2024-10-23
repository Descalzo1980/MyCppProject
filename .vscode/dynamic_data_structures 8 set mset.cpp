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

/*     set<int> mySet = {5, 4, 7, 8, 22};

    int value;
    cout << "Какое число ищем?" << endl;
    cin >> value; */

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

    /*     auto it = mySet.find(5); */

/*     if (mySet.find(value) != mySet.end())
    {
        cout << "число " << value << " найдено " << endl;
    }
    else
    {
        cout << "число " << value << " отсутствует" << endl;
    }

    for (auto &item : mySet)
    {
        cout << item << endl;
    }

    mySet.erase(5555);

    for (auto &item : mySet)
    {
        cout << item << endl;
    } */

    multiset<int> myMs = {1,2,3,4,4,5,5,56,66,6,6,66}; // можно хранить одинаковые зачения

        for (auto &item : myMs)
    {
        cout << item << endl;
    }

    auto it1 = myMs.lower_bound(1); // 1

    auto it2 = myMs.upper_bound(1); // 2, следующее после 1

    auto a = myMs.equal_range(1); // диапозон чисел

    system("pause");
    return 0;
}