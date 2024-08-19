#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    
    if (a == 0){
        cout << "You can't divide by zero" << endl;
    }
    else if (a % 2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    return 0;
}