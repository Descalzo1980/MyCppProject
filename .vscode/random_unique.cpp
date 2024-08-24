#include <iostream>
#include <locale>
#include <Windows.h>
#include <ctime>
#include <set>
#include <vector>
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];

    bool unique;

    for (int i = 0; i < SIZE;)
    {
        unique = false;
        int new_ranmom_value = rand() % 20;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == new_ranmom_value)
            {
                unique = true;
                break;
            }
        }
        if (!unique)
        {
            arr[i] = new_ranmom_value;
            i++;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }

    /*     Sleep(3000); */
    system("pause");

    return 0;
}