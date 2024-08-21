#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "One" << endl;
    goto link;
    cout << "Two" << endl;
    cout << "Three" << endl;
    link:
    cout << "Four" << endl;
    cout << "Five" << endl;

    system("pause");
}