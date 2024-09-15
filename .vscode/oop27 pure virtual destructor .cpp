#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  Чисто Виртуальный деструктор
 */

class A
{
public:
  A()
  {
  }
  virtual ~A() = 0;
};

A::~A(){};

class B : public A
{
public:
  B()
  {
  }
  ~B() override
  {
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    //A a; // абстрактный из за деструктора
    A *apntr = new B;
    delete apntr;

  }

  system("pause");
  return 0;
}