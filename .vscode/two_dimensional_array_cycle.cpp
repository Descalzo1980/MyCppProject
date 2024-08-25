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

    const int ROWS = 5;
    const int COLUMNS = 8;

    int arr[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            arr[i][j] = rand() % 100;
        }
        
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << arr[i][j] << "\t" ;
        }

        cout << endl;
        
    }
    
    system("pause");

    return 0;

}