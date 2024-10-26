#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;

/*

Многопоточность
Лямбда выражения и возврат результата выполнения потока

*/

void DoWork(int &a)
{
    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "ID потока = " << this_thread::get_id() << " DoWork Start" << endl;

    this_thread::sleep_for(chrono::milliseconds(4000));

    a *= 2;

    cout << "ID потока = " << this_thread::get_id() << " DoWork Stopped" << endl;
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int q = 5;

    thread t(DoWork,std::ref(q));

    for (size_t i = 0; i < 10; i++)
    {
        cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

     t.join(); // 10, дождемся выполнения потока
    //t.detach(); // 5, не дождемся результата

    cout << q << endl;

    system("pause");
    return 0;
}