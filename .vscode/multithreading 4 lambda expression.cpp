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

int Sum(int a, int b)
{
    this_thread::sleep_for(chrono::milliseconds(2000));

    cout << "ID потока = " << this_thread::get_id() << " Sum Start" << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "ID потока = " << this_thread::get_id() << " Sum Stopped" << endl;

    return a + b;
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int result;
    auto f = [&result]()
    {
        result = Sum(2, 5);
    };
    thread t(f);

    for (size_t i = 0; i <= 10; i++)
    {
        cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    t.join();
    cout << "Sum result = " << result << endl;

    system("pause");
    return 0;
}