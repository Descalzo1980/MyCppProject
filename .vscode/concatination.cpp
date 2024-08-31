#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>

using namespace std;


int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

   // C style
   char str1[255] = "Hello "; // если места мало, выдаст ошибку
   char str2[255] = "World";

   //cout << str1 << endl;

   //strcat(str1,str2); // данные из второго массива дописали в первый

   //cout << str1 << endl;

   char result[255]{};
   strcat(result, str1);
   strcat(result, str2);

   cout << result << endl;
 /* =========================== */
   const char *str = "Hello";

   cout << str << endl;

   string str11 = "Hello";
   string str22 = "World";
   string str33 = "!!!";
   string result1;
   result1 = str11 + " " + str22 + str33;

   cout << result1 << endl;

   string firstName = "First";
   string middleName = "Second";
   string lastName = "Last";
   string resultFML;

   resultFML = "Фамилия " + middleName + "\tИмя " + firstName + "\tОтчество " + lastName;
   cout << resultFML << endl;

   system("pause");
   return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */