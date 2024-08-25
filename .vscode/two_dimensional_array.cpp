#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    const int ROW = 2;
    const int COLUMN = 4;

    int arr[ROW][COLUMN]{ {2,33,44,55}, {66,77,88,99}};

/*     arr[1][1] = 5;
    arr[2][0] = 11111111;

    int a;
    a = 0; */

    cout << arr[0][1] << endl;
    cout << arr[1][0] << endl;

    system("pause");

    return 0;

}