#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*

Многопоточность
        mutex

защита разделенных данных

синхронизация потоков

основная проблема синхронизации это общее время выполнение программы
если синхронизировать, 3 секунды, без синхронизации 1 секунда
надо думать где это применять)
*/
mutex mtx;

void Print(char ch)
{
    this_thread::sleep_for(chrono::milliseconds(2000));
    mtx.lock();
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
    mtx.unlock();
    this_thread::sleep_for(chrono::milliseconds(2000));
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    {
    SimpleTimer st;

/*     thread t1(Print,'#');
    thread t2(Print,'*'); */
    Print('#');
    Print('*');

/*     t1.join();
    t2.join(); */
    }


    system("pause");
    return 0;
}