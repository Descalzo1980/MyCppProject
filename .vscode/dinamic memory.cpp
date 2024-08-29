#include <iostream>
#include <locale>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int *pa = new int;
    *pa = 10;
    cout << pa << endl;
    cout << *pa << endl;

    delete pa;
    // чистить данные, но указатель
    // живее всех живых, адрес сохранен

    pa = 0;
    pa = NULL; // одна фигня , что так что 0, это макрос
    pa = nullptr; // отдельный тип данных
    if(pa != NULL)
    {
    cout << pa << endl;
    }

    /* 
    pa = nullptr; идет стирание адреса
    delete pa; но данные остались
    это утечка памяти
     */

    system("pause");
    return 0;
}