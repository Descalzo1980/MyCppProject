#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "You entered 1";
        break;
    case 2:
        cout << "You entered 2";
        break;
    default:
        cout << "Invalid input";
        break;
    }
}