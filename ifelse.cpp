#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    bool rain = false;
    
    if(rain) 
    {
        MessageBox(NULL, TEXT("It is rain!"), TEXT("If rain!"), MB_YESNO | MB_ICONQUESTION);
    } else 
    {
        MessageBox(NULL,  TEXT("It is sun"), TEXT("If sun"), MB_OKCANCEL | MB_ICONINFORMATION);
    }

    return 0;
}