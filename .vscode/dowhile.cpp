#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int sum = -1;
    int rangeBegin, rangeEnd;

    cout << "введите начало диапазона" << endl;
    cin >> rangeBegin;

    cout << "введите конец диапазона" << endl;
    cin >> rangeEnd;

    do
    {
        if(rangeBegin % 2 != 0)
        {
            sum += rangeBegin;
        }
        rangeBegin++;
    } while (rangeBegin < rangeEnd);

    cout << "Сумма всех нечетных чисел в заданном диапазоне равна " << sum << endl;
    
}