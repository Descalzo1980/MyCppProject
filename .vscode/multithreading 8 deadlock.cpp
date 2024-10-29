#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*

Многопоточность
Deadlock
Взаимная блокировка
*/
mutex mtx1;
mutex mtx2;

void Print()
{
    /*     mtx2.lock(); так будет дедлок
        this_thread::sleep_for(chrono::milliseconds(1));
        mtx1.lock(); */

    mtx1.lock();
    this_thread::sleep_for(chrono::milliseconds(1));
    mtx2.lock();

    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "*";
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout << endl;
    }
    cout << endl;

    mtx1.unlock();
    mtx2.unlock();
}

void Print2()
{
    /*     mtx1.lock(); так будет дедлок
        this_thread::sleep_for(chrono::milliseconds(1));
        mtx2.lock(); */
    mtx1.lock();
    this_thread::sleep_for(chrono::milliseconds(1));
    mtx2.lock();
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "#";
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout << endl;
    }
    cout << endl;

    mtx2.unlock();
    mtx1.unlock();
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    {
        SimpleTimer st;

        thread t1(Print);
        thread t2(Print2);

        t1.join();
        t2.join();
    }

    system("pause");
    return 0;
}