#include <iostream>
#include <locale>
#include <algorithm>
#include <string>

using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{

    string a = "Hello", b = "World";
    cout << "Before a = " << a << ", Before b = " << b << endl;
    Swap(a, b);
    cout << "After a = " << a << ", After b = " << b << endl;
    system("pause");
    return 0;
}