#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*

Многопоточность
unique_lock mutex

unique_lock vs lock_guard

*/

mutex m;
void Print(char ch)
{
    unique_lock<mutex> ul(m,defer_lock);

    this_thread::sleep_for(chrono::milliseconds(2000));
    ul.lock();
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl;
    }
    cout << endl;
/*     ul.unlock();
    this_thread::sleep_for(chrono::milliseconds(2000)); */
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

        t1.join();
        t2.join();
    }
    system("pause");
    return 0;
}