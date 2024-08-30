#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru"); 
    // для того, чтобы после 127 была кириллическая раскладка
    // то есть национальная раскладка, может меняться кароч)

    for (int i = 0; i <= 255; i++)
    {
        cout << "code = " << i <<"\t"<<"char = "<< char(i) << endl;
    }
    
    
/*     cout << sizeof(char) << endl; */



    system("pause");
    return 0;
}

/*
Ctrl + Shift + Space: посмотреть параметры
 */