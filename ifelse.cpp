#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    bool rain = false;
    
    if(rain) {
        MessageBox(NULL,  TEXT("It is rain!"), TEXT("If rain!"), MB_OK | MB_ICONINFORMATION);
    } else {
        MessageBox(NULL,  TEXT("It is sun"), TEXT("If sun"), MB_OK | MB_ICONINFORMATION);
    }

    return 0;
}