#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
#include <stdexcept>
using namespace std;

/*

Очередь 
FIFO!

элемент извлекается и идет в конец 

есть еще очередь с приоритетом

вначале сортировка, потом выполнение


это приоритеты

идет сдвиг элементов

1 1 2 3 1

сортируем

*/


int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    system("pause");
    return 0;
}