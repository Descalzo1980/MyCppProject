#include <iostream>
#include <locale>
#include <Windows.h>
#include <algorithm>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 5;
    int *pa = &a;

    int &aref = a;
    cout << "a\t" << a << endl;
    cout << "&aref\t" << aref << endl;
    /*     cout << "pa\t" << pa << endl;
        pa++;
        pa = pa+2;
        cout << "pa\t" << pa << endl; */
    /*     cout << "&aref\t" << aref << endl;
        aref++;
        cout << "&aref\t" << aref << endl; */

    aref = 55;
    cout << "a\t" << a << endl;

    //int *pp; // может быть null 
    //int &pref; // требует инициализации

    int *ppa = &aref;

    cout << "ppa\t" << ppa << endl;
    cout << "*ppa\t" << *ppa << endl;
    *ppa = 12;
    cout << "a\t" << a << endl;
    Sleep(5000);
/*     system("pause");
    return 0; */
}