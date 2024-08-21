#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    for (int i = 0; i < 5; i++)
    {
        if(i == 2)
        {
            continue;
        }

        cout << "переменная i = " << i << endl;
    }
    
}