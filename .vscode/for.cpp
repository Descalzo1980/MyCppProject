#include<iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int i;

    for (; i < 10; i++)
    {
        cout << "Я всё больше люблю Котлин "<< i << endl;
    }
    cout << " Второй цикл " << endl;
        for (; i < 20; i++)
    {
        cout << "Я всё больше люблю Котлин "<< i << endl;
    }
}