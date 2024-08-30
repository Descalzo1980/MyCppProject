#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


int main()
{

    // \O Нуль терминатор
    char string [] = {'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};// \0 реально нужен

    cout << strlen(string) << endl;
    int count = sizeof(string) / sizeof(string[0]);

    for (int i = 0; i < count; i++)
    {
        std::cout << string[i];
    }
    std::cout << std::endl;
    

    char symbol = 'q';
/*     char string [] = "a"; // a \0 */
    char string1 [] = "Hello World!"; // a \0
    const char* str = "Hello World!";
    cout << symbol << endl;
/*     cout << string << endl; */
    cout << string1 << endl;
    cout << strlen(str) << endl;

    system("pause");
    return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */