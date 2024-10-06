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

    vector<int> myVector = {1, 2, 3, 4, 5};
    myVector.reserve(100);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(6);

    myVector[1] = 1000;

    cout << myVector[2] << endl;
    // cout << myVector.at(22) << endl; // проверяет границы

    /*     try
        {
            cout << myVector.at(22) << endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        } */

    cout << "количество элементов в векторе " << myVector.size() << endl;

    /*     myVector.clear();

        cout << "количество элементов в векторе " << myVector.size() << endl; */

    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }
    /*
        myVector.pop_back(); */

    cout << "количество элементов в векторе " << myVector.size() << endl;

    cout << "capacity в векторе " << myVector.capacity() << endl;

    myVector.shrink_to_fit();

    cout << "capacity в векторе после shrink_to_fit " << myVector.capacity() << endl;

    cout << "empty? " << myVector.empty() << endl;

    myVector.resize(20);

    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }

    myVector.insert();
    myVector.erase();

    system("pause");
    return 0;
}