#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


int main()
{

    double a = 33.3; // char !

    int b = 34.6556;

    /* int b = a сужающее преобразование */

    cout << (char)a << endl;
    cout << b << endl; // 34 это не явно преобразование

    system("pause");
    return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */