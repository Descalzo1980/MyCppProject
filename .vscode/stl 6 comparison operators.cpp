#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <array>
using namespace std;

/*

STL

операторы сравнения

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    array<int,4> arr = {1,33,55,7};

    array<int,4> arr2 = {1,33,55,7};

    bool result = (arr == arr2);

    cout << result << endl; 
    // 1 то есть true, короче вся вот эта != > < штука
    // главное шоб были перегружены операторы

    
    system("pause");
    return 0;
}