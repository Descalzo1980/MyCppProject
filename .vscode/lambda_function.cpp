#include <iostream>
#include <locale>
#include <Windows.h>
#include <functional>
#include <vector>

using namespace std;

/*
  Лямбда функция

*/

void Foo(int a)
{
  if (a > 10 && a < 40)
  {
    cout << "Foo " << a << endl;
  }
}

void Bar(int a)
{
  if (a % 2 == 0)
  {
    cout << "Bar " << a << endl;
  }
}

/* void DoWork(vector<int> &vc, vector<function<void(int)>> funcVector)
{
  for (auto el : vc)
  {
    for (auto &fel : funcVector)
    {
      fel(el);
    }
  }
} */

void DoWork(vector<int> &vc, function<void(int)> func)
{
  for (auto el : vc)
  {
    func(el);
  }
}

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  // это базовая лямбда функция
  // [](){};
  //[](параметры){тело функции};

  //int p = 0;
  /* это захват контекста */
  //auto f = [&p]()
  //{
    //p = 5;
  //};

  //f();

  auto f = []()
  {
    return 1.222;
  };

  auto q = f();

  f();

  /*   vector<int> vc = {1, 2, 3, 10, 22, 33, 44, 55, 66, 77, 99}; */

  /*   function<void(int)> f;

    f = [](int a)
    {
      cout << "вызвана анонимная функция с параметром - " << a << endl;
    };

    DoWork(vc, f); */

  /*   DoWork(vc,[](int a)
    {
      cout << "вызвана анонимная функция с параметром - " << a << endl;
    }); */
  /*   DoWork(vc, [](int a)
           {
        if (a % 2 == 0)
    {
      cout << "лямбда " << a << endl;
    } }); */

  system("pause");
  return 0;
}