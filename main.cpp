#include <iostream>
using namespace std;

int main()
{
 setlocale(LC_ALL, "Rus");

 int num1, num2;
 cout << "Введите первое число: ";
 cin >> num1;
 cout << "Введите второе число: ";
 cin >> num2;
 cout << "Ответ +: " << num1 + num2 << "\n";
 cout << "Ответ *: " << num1 * num2 << "\n";
 cout << "Ответ /: " << num1 / num2 << "\n";
 cout << "Ответ -: " << num1 - num2 << "\n";
}

// formate shift + alt + f