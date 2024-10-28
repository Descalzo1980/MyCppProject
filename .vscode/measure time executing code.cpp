#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>

using namespace std;

/*
    время выполнения участка кода
 */

class SimpleTimer
{

public:
    SimpleTimer()
    {
        start = chrono::high_resolution_clock::now();
    }
    ~SimpleTimer()
    {
        end = chrono::high_resolution_clock::now();
        chrono::duration<float> duration = end - start;
        cout << "Время выполнения: " << duration.count() << " секунд\n"
             << endl;
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
};

int Sum(int a, int b)
{
    SimpleTimer timer;
    this_thread::sleep_for(chrono::milliseconds(2000));

    cout << "ID потока = " << this_thread::get_id() << " Sum Start" << endl;

    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "ID потока = " << this_thread::get_id() << " Sum Stopped" << endl;

    return a + b;
}

int main()
{
    {
        SimpleTimer timer;
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);
        setlocale(LC_ALL, "ru_RU.UTF-8");

        int result;

        // thread t([&result](){ result = Sum(2, 5); }); с потоком 7 секунд, без потока 12.5
        thread t([&result]()
                 { result = Sum(2, 5); });
        /*     result = Sum(2, 5); */

        for (size_t i = 0; i <= 10; i++)
        {
            cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
            this_thread::sleep_for(chrono::milliseconds(500));
        }

        t.join();

        cout << "Sum result = " << result << endl;
    }

    system("pause");

    return 0;
}