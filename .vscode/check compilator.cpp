#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

#if defined(__clang__)
    std::cout << "Компилятор: Clang\n";
    std::cout << "Версия: " << __clang_major__ << "." << __clang_minor__ << "\n";
#elif defined(__GNUC__) || defined(__GNUG__)
    std::cout << "Компилятор: GCC\n";
    std::cout << "Версия: " << __GNUC__ << "." << __GNUC_MINOR__ << "\n";
#elif defined(_MSC_VER)
    std::cout << "Компилятор: MSVC\n";
    std::cout << "Версия: " << _MSC_VER << "\n";
#else
    std::cout << "Компилятор: Неизвестен\n";
#endif

    std::cout << "Размер int: " << sizeof(int) << " байт\n";
    std::cout << "Размер float: " << sizeof(float) << " байт\n";
    std::cout << "Размер double: " << sizeof(double) << " байт\n";
    std::cout << "Размер char: " << sizeof(char) << " байт\n";
    std::cout << "Размер unsigned int: " << sizeof(unsigned) << " байт\n";

    system("pause");

    return 0;
}