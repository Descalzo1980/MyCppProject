#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*

Многопоточность
lock_guard mutex
захватывает мютекс в конструкторе
при создании объекта такого класса
и освободить этот мютекс в декструкторе
когда объект этого класса будет покидать какую либо
область видимости
*/
mutex mtx;

void Print(char ch)
{
    this_thread::sleep_for(chrono::milliseconds(2000));
    {
        lock_guard<mutex> guard(mtx);

        for (int i = 0; i < 5; i++)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << ch;
                this_thread::sleep_for(chrono::milliseconds(20));
            }
            cout << endl;
        }
        cout << endl;
    }
    this_thread::sleep_for(chrono::milliseconds(2000));
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    {
        SimpleTimer st;

        thread t1(Print, '#');
        thread t2(Print, '*');
        thread t3(Print, '?');
        /*     Print('#');
            Print('*');
            Print('?'); */

        t1.join();
        t2.join();
        t3.join();
    }

    system("pause");
    return 0;
}