#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
using namespace std;

/*

Динамические структуры 

Двусвязный список
____________________
    pNext
____________________
    pPrev
____________________
    data
____________________


высокая скорость добавления и удаления элементов
быстрее чем у односвязного, ну типа в конец например
недостаток собсно тот же, поскольку 
два указателя на предыдущий и следующий
*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    
    
    system("pause");
    return 0;
}