#include <iostream>
#include <locale>
#include <algorithm>

using namespace std;

template <typename T1,typename T2>
void Template(T1 &a, T2 &b)
{   
    swap(a, b);
}


int main()
{

    int a = 0, b = 4;
    Template(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    system("pause");
    return 0;
}