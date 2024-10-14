#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <array>
using namespace std;

/*

STL

array это статический массив, например

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    array<int,4> arr = {1,33,55,7};

    cout << arr[0] << endl; // это никак не проверяется, можно выйти за границы массива
    //cout << arr.at(7) << endl; // а тут будет ошибка, проверит границы

    try
    {
        cout << arr.at(7) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    for (auto el : arr)
    {
        cout << el << endl;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    arr.fill(333);

        for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    arr.front(); //first
    arr.back(); //last
    
    
    
    

    system("pause");
    return 0;
}