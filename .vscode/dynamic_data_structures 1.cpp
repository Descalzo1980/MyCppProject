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

Односвязный список

по сути своей это мини класс ,
хранит в себе адрес и ссылку 
на следующий элемент
очень быстро можно вставлять
медленно идет перебор
идет до null, null это показывает что конец списка


____________________
    address
____________________
    data
____________________
*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");


    
    system("pause");
    return 0;
}