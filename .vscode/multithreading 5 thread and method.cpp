#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;

/*

Многопоточность
Запуск метода класса в отдельном потоке

*/

class MyClass
{
public:
    void DoWork()
    {
        this_thread::sleep_for(chrono::milliseconds(2000));

        cout << "ID потока = " << this_thread::get_id() << " DoWork Start" << endl;

        this_thread::sleep_for(chrono::milliseconds(5000));

        cout << "ID потока = " << this_thread::get_id() << " DoWork Stopped" << endl;
    }

    void DoWork2(int a)
    {
        this_thread::sleep_for(chrono::milliseconds(2000));

        cout << "ID потока = " << this_thread::get_id() << " DoWork Start" << endl;

        this_thread::sleep_for(chrono::milliseconds(5000));

        cout << "DoWork2 значение параметра\t" << a << endl;

        cout << "ID потока = " << this_thread::get_id() << " DoWork Stopped" << endl;
    }

    int Sum(int a, int b)
    {
        this_thread::sleep_for(chrono::milliseconds(2000));

        cout << "ID потока = " << this_thread::get_id() << " Sum Start" << endl;

        this_thread::sleep_for(chrono::milliseconds(5000));

        cout << "ID потока = " << this_thread::get_id() << " Sum Stopped" << endl;

        return a + b;
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int result;
    MyClass m;

    /*     thread t([&]()
                 { result = m.Sum(2, 5); }); */

    /*     thread t([&]()
                 { m.DoWork(); });  это первый вариант*/

    thread t([&]()
             { m.DoWork2(5); });

    // thread t(&MyClass::DoWork2, m, 5); // это второй вариант

    for (size_t i = 0; i <= 10; i++)
    {
        cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    t.join();

    cout << "Result\t " << result << endl;

    system("pause");
    return 0;
}