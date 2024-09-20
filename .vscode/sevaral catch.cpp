#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
Несколько блоков catch
 */

void Foo(int value)
{
  if (value < 0)
  {
    // throw runtime_error("Число меньше 0");
    throw "Число меньше нуля!";
  }
  if (value == 0)
  {
    throw runtime_error("Число равно ноль!");
  }
    if (value == 1)
  {
    throw 1;
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
    Foo(1);
  }
  catch (const exception &err)
  {
    cout << "Мы поймали: " << err.what() << endl;
  }
  catch (const char *err)
  {
    cout << "Блок 2 мы поймали: " << err << endl;
  }
  catch(...)
  {
    cout << "Что то пошло не так" << endl;
  }

  system("pause");
  return 0;
}