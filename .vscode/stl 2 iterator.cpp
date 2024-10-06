#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <vector>
using namespace std;

/*

STL

Итераторы

*/

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    vector<int> myVector = {1, 2, 777, 4, 5, 6, 7, 8, 9, 10};

    /*     int arr[] = {2,5,7};

        cout << arr[1] << endl;

        cout << *(arr + 1) << endl;

        cout << (arr + 1) << endl; */

    /*     cout << myVector[2] << endl;

        vector<int>::reverse_iterator it; */

    /*     it = myVector.begin() + 1; */

    /*     *it = 1000; */

    /*     it+2; */

    /*     cout << *it << endl; */

    vector<int>::iterator secondit = myVector.begin();
    /*     cout << *secondit << endl; */

    /*     advance(secondit, 2); */

    /*     cout << *secondit << endl; */

    /*     for (it = myVector.rbegin(); it != myVector.rend(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl; */

    for (secondit = myVector.begin(); secondit != myVector.end(); ++secondit)
    {
        cout << *secondit << " ";
    }
    cout << endl;

    secondit = myVector.begin();

    advance(secondit, 6);

    myVector.insert(secondit, 888);

    for (secondit = myVector.begin(); secondit != myVector.end(); ++secondit)
    {
        cout << *secondit << " ";
    }
    cout << endl;

    cout << endl
         << "erase" << endl;

    vector<int>::iterator eraseit = myVector.begin();

    advance(eraseit, 2);

    myVector.erase(eraseit); // удалит элемент на который указывает

    for (secondit = myVector.begin(); secondit != myVector.end(); ++secondit)
    {
        cout << *secondit << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}