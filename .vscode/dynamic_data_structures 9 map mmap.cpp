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
#include <map>
#include <string>
using namespace std;

/*

map // тоже имеют структуру бинарного дерева

multimap

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    pair<int, string> p(22, "Ololo"); // первое значение это ключ для построения бинарного дерева

    map<int, string> myMap;
    myMap.insert(make_pair(44, "Должно вернуть 44")); // копирует объект
    myMap.insert(make_pair(33, "First"));             // копирует объект
    auto it = myMap.begin();
    cout << p.first << endl;
    cout << p.second << endl;
    cout << it->first << endl;
    cout << it->second << endl;

    cout << "Элементы myMap:" << endl;

    myMap.emplace(22, "second"); // создает объект в момент выполнения

    for (const auto &pair : myMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    auto it2 = myMap.find(33);

    if (it2 != myMap.end())
    {
        cout << it2->second << endl;
    }

    myMap.emplace(22, "клавиатура"); // не добавится, ключ такой же

    auto res = myMap.emplace(22, "клавиатура");

    cout << myMap[44] << endl;

    map<string,int> mySMap;

    mySMap.emplace("Вася", 444);
    mySMap.emplace("Миша", 555);
    mySMap.emplace("Маша", 777);

    cout << mySMap["Вася"] << endl; // [] принимает тот тип данных, который указан в мапе как ключ

    mySMap["Вася"] = 9999;

    cout << mySMap["Вася"] << endl;

    try
    {
        mySMap.at("Васяяяя") = 55555;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "такого ключа нету" << '\n';
    }
    
    cout << mySMap["Вася"] << endl;

    multimap<string,int> myMMap; // может хранить дублирующие ключи

    system("pause");
    return 0;
}