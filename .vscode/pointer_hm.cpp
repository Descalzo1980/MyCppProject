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

    int a, b;
/*     cout << "Enter number a " << endl;
    cin >> a;
    cout << "Enter number b " << endl;
    cin >> b;
    Swap(&a, &b);
    cout << "Reverce number " << "a = " << a << "\n" << " b = "<<  b << endl; */


    std::cout << "Enter number a " << std::endl;
    std::cin >> a;
    std::cout << "Enter number b " << std::endl;
    std::cin >> b;

    std::swap(a, b);

    std::cout << "Reversed numbers: a = " << a << "\n" << "b = " << b << std::endl;

    system("pause");
    return 0;
}