#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


int main()
{
    
    char str[] = "Hello";

    const char *myString = str;

    cout << myString << endl;

    const char *strArr[] = {"Hello", "World", "test"};
    int numElements = sizeof(strArr) / sizeof(strArr[0]);
    for (int i = 0; i < numElements; i++)
    {
       cout << strArr[i] << endl;
    }
    cout << endl;



    system("pause");
    return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */