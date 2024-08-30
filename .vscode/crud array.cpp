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

// value это последний элемент который мы хотим добавить
// size это размер массива, передаем по ссылке
// arr это указатель на ссылку, для подмены адреса

void push_back(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size] = value;
    size++;
    delete[] arr;
    arr = newArray;
}

void push_front(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];
    newArray[0] = value;
    for (int i = 0; i < size; i++)
    {
        newArray[i + 1] = arr[i];
    }

    size++;
    delete[] arr;
    arr = newArray;
}

void push_diff(int *&arr, int &size, const int value, const int index)
{
    if (index < 0 || index > size)
    {
        return;
    }

    int *newArray = new int[size + 1];
    for (int i = 0; i < index; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[index] = value;
    for (int i = index; i < size; i++)
    {
        newArray[i + 1] = arr[i];
    }
    size++;
    delete[] arr;
    arr = newArray;
}

void pop_diff(int *&arr, int &size, const int index)
{
    // Проверяем, что индекс корректен
    if (index < 0 || index >= size)
    {
        return;
    }

    // Уменьшаем размер массива
    size--;
    int *newArray = new int[size];

    // Копируем элементы до удаляемого
    for (int i = 0; i < index; i++)
    {
        newArray[i] = arr[i];
    }

    // Копируем элементы после удаляемого
    for (int i = index; i < size; i++)
    {
        newArray[i] = arr[i + 1];
    }

    // Освобождаем память старого массива
    delete[] arr;

    // Перенаправляем указатель
    arr = newArray;
}

void pop_front(int *&arr, int &size)
{
    size--;
    int *newArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i + 1];
    }
    delete[] arr;
    arr = newArray;
}

void pop_back(int *&arr, int &size)
{
    size--;
    int *newArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    delete[] arr;
    arr = newArray;
}

int main()
{

    int size = 5;
    int *arr = new int[size];

    FillArray(arr, size);
    ShowArray(arr, size);
    push_back(arr, size, 111);
    ShowArray(arr, size);
    pop_back(arr, size);
    ShowArray(arr, size);
    pop_back(arr, size);
    ShowArray(arr, size);

    push_front(arr, size, 111);
    ShowArray(arr, size);

    pop_front(arr, size);
    ShowArray(arr, size);

    push_diff(arr, size, 111, 2);
    ShowArray(arr, size);
    pop_diff(arr, size, 2);
    ShowArray(arr, size);
    delete[] arr;
    system("pause");
    return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */