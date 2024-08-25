#include <iostream>
#include <locale>
#include <Windows.h>


using namespace std;

int Sum(int a, int b){
    return a + b;
}

void foo()
{
    cout << "Я функция, я говорю кря" << endl;
}

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    cout << Sum(2,3) << endl;

    foo();

    for (int i = 0; i < 10; i++)
    {
        foo();
    }
    

    system("pause");

    return 0;

}