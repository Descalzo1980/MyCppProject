#include <iostream>

using namespace std;

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