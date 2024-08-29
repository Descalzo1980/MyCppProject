#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

void FillArray(int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void ShowArray(const int *const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{

    const int size = 10;
    int *firstArray = new int[size];
    int *secondArray = new int[size];

    FillArray(firstArray, size);
    FillArray(secondArray, size);

    cout << "First array = " << "\t";
    ShowArray(firstArray, size);
    cout << "Second array = " << "\t";
    ShowArray(secondArray, size);

    delete [] firstArray;
    firstArray = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        firstArray[i] = secondArray[i];
    }
    
    cout << "========================================" << endl;

    /* firstArray = secondArray;  это не копирует массив, а просто перемещает ссылку*/

    cout << "First array = " << "\t";
    ShowArray(firstArray, size);
    cout << "Second array = " << "\t";
    ShowArray(secondArray, size);

    delete[] firstArray;
    delete[] secondArray;
    system("pause");
    return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */