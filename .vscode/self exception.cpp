#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
свой класс exception
 */

class MyException : public exception
{
public:
  MyException(const char *message) : msg_(message){}

  virtual const char *what() const noexcept override
  {
    return msg_.c_str();
  }

private:
  string msg_;
};

void Foo(int value)
{
  if (value < 0)
  {
    throw "Число меньше нуля!";
  }
  if (value == 1)
  {
    throw MyException("Число равно 1");
  }

  cout << "Переменная = " << value << endl;
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  try
  {
    Foo(1);
  }
  catch (MyException &err)
  {
    cout << "Блок 1 мы поймали:" << err.what() << endl;
  }
  catch (...)
  {
    cout << "Что то пошло не так" << endl;
  }

  system("pause");
  return 0;
}