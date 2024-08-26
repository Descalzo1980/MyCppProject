#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

/* int Sum(int a, int b)
{
    return a + b;
}

double Sum(double a, double b)
{
    return a + b;
}

double Sum(double a, int b)
{
    return a + b;
} */

template <typename T1, typename T2> T1 Sum (T1 a, T2 b){
    return a + b;
} 


template <typename T1,typename T2>
void Sum1 (T1 a, T2 b)
{
    cout << a << endl;
    cout << b << endl;
}

template <class T>
void Sum1 (T a)
{
    cout << a << endl;
} 

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    cout << Sum(5, 10) << endl;

    cout << Sum(5.1, 10.2) << endl;

    cout << Sum(5.1, 10) << endl;

    Sum1 (4,"ololo");
    Sum1 (4);

    system("pause");

    return 0;
}