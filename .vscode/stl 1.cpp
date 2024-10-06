#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <vector>
using namespace std;

/*

STL

VECTOR

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    vector<int> myVector;
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(6);

    myVector[1] = 1000;

    cout << myVector[10] << endl;
    cout << "количество элементов в векторе " << myVector.size() << endl;

    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }

    system("pause");
    return 0;
}