#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <mutex>
#include "SimpleTimer.h"

using namespace std;

/*

Многопоточность
Рекурсивный мьютекс

*/

recursive_mutex rm;
mutex m;
void Foo(int a)
{
    rm.lock();
    cout << a << " ";

    this_thread::sleep_for(chrono::milliseconds(500));

    if (a <= 1)
    {
        cout << endl;
        rm.unlock();
        return;
    }

    a--;
    Foo(a);
    rm.unlock();
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    thread t1(Foo, 10);

    thread t2(Foo, 10);

    t1.join();
    t2.join();

    system("pause");
    return 0;
}