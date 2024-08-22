#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int heigth;
    int width;
        cout << "Задайте высоту прямоугольника" << endl;
        cin >> heigth;
        cout << "Задайте ширину прямоугольника" << endl;
        cin >> width;
    for (int i = 0; i < heigth; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;
    Sleep(5000);

    return 0;
}