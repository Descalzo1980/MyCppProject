#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;

/*

Многопоточность
потоки
thread

*/

void threadFunction()
{
    cout << "Thread ID: " << this_thread::get_id() << endl;
}
/* 
void DoWork()
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << "ID потока = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
} */

void DoWork(string threadName, int delay)
{
    for (size_t i = 0; i < 5; i++)
    {
        cout << "Thread: " << threadName << " | Iteration: " << i << " | Thread ID: " << this_thread::get_id() << endl;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    /*     thread th(DoWork); */

    // th.detach(); // Отпускаем поток в "свободное плавание" но это полностью отсоединяет поток от main

    /*     th.join();  */

    thread th1(DoWork, "A", 1000);
    thread th2(DoWork, "B", 500);
    thread th3(DoWork, "C", 700);

    /*     cout << "START MAIN THREAD" << endl;
        this_thread::sleep_for(chrono::milliseconds(5000));
        cout
            << "Main thread ID: " << this_thread::get_id() << endl;
        cout << "END MAIN THREAD" << endl; */
    /*     DoWork(); */
    /*     for (size_t i = 0; i < 10; i++)
        {
            cout << "ID потока = " << this_thread::get_id() << "\tmain\t" << i << endl;
            this_thread::sleep_for(chrono::milliseconds(500));
        } */

    th1.join(); 
    // позволяет дождаться выполнения той задачи,
    // которую мы поставили в другом потоке, важно где вызываем,
    // чтобы было реально распараллеливание потоков
    th2.join();
    th3.join();
    cout << "threads are done." << endl;
    system("pause");
    return 0;
}