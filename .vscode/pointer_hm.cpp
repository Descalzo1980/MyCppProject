#include <iostream>
#include <locale>
#include <Windows.h>
#include <algorithm>

using namespace std;

void Swap(int *a, int *b)   
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a = 22, b = 33;
/*     cout << "Enter number a " << endl;
    cin >> a;
    cout << "Enter number b " << endl;
    cin >> b;
    Swap(&a, &b);
    cout << "Reverce number " << "a = " << a << "\n" << " b = "<<  b << endl; */

    cout << "Before a = " << a << ",Before b = " << b << endl;
    
    Swap(&a, &b);
    cout << "After a = " << a << ",After b = " << b << endl;
    system("pause");
    return 0;
}