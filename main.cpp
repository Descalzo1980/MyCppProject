#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int Var, Var2;

    cout << "Введите первое число: ";
    cin >> Var;
    cout << "Введите второе число: ";
    cin >> Var2;
    cout << "Число 1 = " << Var << endl
         << "Число 2 = " << Var2 << endl;
}

// formate shift + alt + f