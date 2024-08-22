#include<iostream>
using namespace std;

int Sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int a = 5;
    int b = 6;
    int c;
    c = Sum(a, b);

    cout << c << endl;

    system("pause");
}