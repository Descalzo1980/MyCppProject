#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    if (a > 5)
    {
        cout << "So big!" << endl;
    }
    else if (a == 5)
    {
        cout << "a = 5" << endl;
    }
    else
    {
        cout << "So small" << endl;
    }
}