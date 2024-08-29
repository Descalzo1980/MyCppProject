#include <iostream>
#include <locale>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int rows;
    int columns;
    cout << "enter rows" << endl;
    cin >> rows;
    cout << "enter columns" << endl;
    cin >> columns;
    int **arr = new int* [rows];  
    
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int [columns]; 
    }
    ///////////////////////////////////////////////

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 20;
        }

    }
    //////////////////////////////////////////////
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << "\t";
        }
            cout << endl;
    }


    //////////////////////////////////////////////
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i]; // а вот это удаляем данные
    }
    
    delete [] arr; // это удаляем основной массив, а надо еще данные, или утечка!

    system("pause");
    return 0;
}