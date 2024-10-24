#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;

/*

Многопоточность
Передача параметров в поток

*/

void DoWork(int a, int b = 10)
{
    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << "==============================\t" << "DoWork Start" << endl;

    this_thread::sleep_for(chrono::milliseconds(2000));

    cout << "a + b = " << a + b << endl;

    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << "==============================\t" << "DoWork Stopped" << endl;
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    /*     DoWork(2,3); */
    thread th1(DoWork, 2, 5); // не вот так DoWork(2, 3),в поток передается указатель на функцию


    for (size_t i = 0; true; i++)
    {
        cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th1.join();


    system("pause");
    return 0;
}