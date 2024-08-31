#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int StrLength(const char *str)
{
   int counter = 0;

   while (str[counter] != '\0')
   {
      counter++;
   }

   return counter;
}

int main()
{

   char str[] = "Hello";
   cout << StrLength(str) << endl;

   char strWthTermZero[] = {'H', 'e', 'l', 'l', 'o'};
   // без \0 выводит ерунду)
   cout << StrLength(strWthTermZero) << endl;
   system("pause");
   return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */