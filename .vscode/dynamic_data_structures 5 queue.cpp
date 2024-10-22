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

первый вошел первый вышел

обработка задач по мере поступления

доступ есть в начале и в конце очередина пример (dll) 

*/


int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    system("pause");
    return 0;
}