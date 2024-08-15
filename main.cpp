#include <iostream>
#include <locale>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::wcout << L"Привет C++" << std::endl;

    return 0;
}