#include <iostream>
#include <locale>
#include <algorithm>
#include <string>

using namespace std;

int main()
{

    int size = 0;
    cout << "Enter array size: " << endl;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
    }

    for (int i = 0; i <= size; i++)
/*
5
1       0x691ce0
7       0x691ce4
14      0x691ce8
0       0x691cec
9       0x691cf0 

-1414812757     0x691cf4  
поставил = 
и обратился не к своему элементу в 
массиве на 5 элементов
*/
    {
        cout << arr[i] << "\t";
        /*         cout << *(arr + i) << endl; */
        cout << arr + i << endl;
    }

    delete[] arr;

    // как положить всю оперативку? создать большой массив)
    system("pause");
    return 0;
}