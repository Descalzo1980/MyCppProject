#include <iostream>
#include <locale>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE;)
    {
        bool isDuplicate = false;
        int newRandomValue = rand() % 20;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            arr[i] = newRandomValue;
            i++;
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }

    system("pause");

    return 0;
}