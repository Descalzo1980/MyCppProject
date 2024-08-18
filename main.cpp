#include <iostream>
using namespace std;

int main()
{
 setlocale(LC_ALL, "ru");
/*
 int num1, num2;
 cout << "Введите первое число: ";
 cin >> num1;
 cout << "Введите второе число: ";
 cin >> num2;
 cout << "Ответ +: " << num1 + num2 << "\n";
 cout << "Ответ *: " << num1 * num2 << "\n";
 cout << "Ответ /: " << num1 / num2 << "\n";
 cout << "Ответ -: " << num1 - num2 << "\n";

 int a = 5, b = 44, c = 55, f,g;
 f = a + b + c;
 g = (a + b + c) / 3;
cout << f << endl;
cout << g << endl;
*/
    int a, b, c;
    cout << "Введите три числа: " << endl;
    cin >> a >> b >> c;
    cout << "Сумма трех чисел равна = "<< a + b + c << endl;
    cout << "Произведение трех чисел равно = "<< a * b *c << endl;
    cout << "Среднее арифметическое трех чисел равно = "<< (double)(a + b + c) / 3 << endl;
    int q = 1;
    q += q;
    cout << "Here = " << q << endl;
    int w = 1,e;
    e = ++w*w;
    cout << e << endl;
}

// formate shift + alt + f