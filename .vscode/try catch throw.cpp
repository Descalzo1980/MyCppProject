#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
throw
 */

void Foo(int value)
{
  if (value < 0)
  {
    throw runtime_error("Число меньше 0");
  }

  cout << "Переменная = " << value << endl;
}

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  try
  {
    Foo(-1);
  }
  catch (const exception &err)
  {
    cout << "Мы поймали: " << err.what() << endl;
  }

  system("pause");
  return 0;
}