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
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int arr[] = {45, 364, 17, 53, 790, 52};

    for (int var : arr)
    {
        cout << var << endl;
    }

    system("pause");
    return 0;
}