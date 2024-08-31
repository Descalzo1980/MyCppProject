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

   while (str[counter]!='\0')
   {
      counter++;
   }

   return counter;
}

int main()
{

   char str[] = "Hello";
   cout << StrLength(str) << endl;

   system("pause");
   return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */