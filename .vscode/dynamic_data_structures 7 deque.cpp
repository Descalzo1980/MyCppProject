#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
#include <stdexcept>
#include <deque>
using namespace std;

/*

Дек 
Deque 
это всего лишь двухсторонняя очередь

левый конец и правый конец
добавляются и извлекаются в порядке очереди
есть ограниченный вход и выход(как вариант)

*/


int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    deque<int> dq = {1, 9, 24};

    dq.at(0) // проверяем вышли или нет за границы
    dq[0] // непроверяем вышли или нет за границы
    
    system("pause");
    return 0;
}