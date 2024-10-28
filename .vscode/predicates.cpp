#include <iostream>
#include <locale>
#include <Windows.h>
#include <thread>

using namespace std;

/*
    Предикаты 
 */

class functor
{
private:
public:
    int operator()(int a, int b)
    {
        cout << "я функтор " << endl;
        return a + b;
    }
};

class EvenFunctor
{
private:
    int evenSum = 0;
    int evenCount = 0;

public:
    void operator()(int value)
    {
        if (value % 2 == 0)
        {
            evenSum += value;
            evenCount++;
        }
    }

    void ShowEvenSum()
    {
        cout << "сумма чётных чисел = " << evenSum << endl;
    }

    void ShowEvenCount()
    {
        cout << "всего чётных чисел = " << evenCount << endl;
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    functor f;
    int result = f(5, 2);

    cout << result << endl;


    EvenFunctor ef;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto el : arr)
    {
        ef(el);
    }

    ef.ShowEvenCount();
    ef.ShowEvenSum();

    system("pause");

    return 0;
}