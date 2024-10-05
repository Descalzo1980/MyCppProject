#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <vector>
using namespace std;

/* auto */

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

/*     auto a = 10;
    auto b = 10.0;
    auto c = "string";
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl; */


    vector<int> myVector = { 11, 46, 9};

    vector<int>::iterator it = myVector.begin();

/*     auto it2 = myVector.begin(); */

    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
    {
        cout << *it << endl;
    }
    

    system("pause");
    return 0;
}