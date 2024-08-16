#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int age = 2;
    cout << age << endl;
    age = 10;
    cout << age << endl;
    int c, v, b;
    c = 11;
    v = 22;
    b = 33;
    double d = 2.8;
    char t = 'K';
    cout <<c<<" "<<v<<" "<<b<<" "<<t<<endl;

    const int DAYS_IN_WEEK = 7;
    const char NEW_LINE = '\n';
    const char TAB = '\t';
    cout << DAYS_IN_WEEK << NEW_LINE;
    cout << DAYS_IN_WEEK << TAB << TAB << DAYS_IN_WEEK;
    cout << DAYS_IN_WEEK << NEW_LINE;
}