#include <iostream>
#include <locale>
#include <Windows.h>
#include <functional>
#include <vector>

using namespace std;

/*
  Лямбда функции
  Захват контекста лямбдой
*/

class MyClass
{

public:
  int a = 11;
  void Msg()
  {
    cout << "msg" << endl;
  }

  void Lambda()
  {
    auto f = [this]()
    {
      this->Msg();
    };
    f();
  }
};


int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

/*   int a = 55;
  int b = 66;

  auto l = [=]()
  {
    cout << a << endl;
    cout << b << endl;
  };

  auto l3 = [=]() mutable
  {
    cout << a << endl;
    a = 111;
    cout << b << endl;
    b = 222;
  };

  auto l2 = [&]()
  {
    cout << a << endl;
    a = 111;
    cout << b << endl;
    b = 222;
  };

  auto lambda = [&a, &b]()
  {
    cout << a << endl;
    cout << b << endl;
  };

  l();
  cout << endl;
  l2();
  cout << endl;
  lambda();
  cout << endl;
  l3(); */

  MyClass mc;
  mc.Lambda();
  // и так можно указать тип возвращаемого значения
  auto f = []()->float
  {
      return 222;
  };

  auto result = f();

  system("pause");
  return 0;
}

/*
По значению — если нужно передать
небольшие объекты (например, int, double)
и изменения в функции не должны затронуть
оригинальные данные.

По ссылке — если нужно передать большие объекты
 (например, контейнеры std::vector)
 без копирования и есть необходимость
 изменить оригинальные данные.

По указателю — если нужно изменять
оригинальные данные и требуется
возможность передавать "пустое"
значение (nullptr).

void byValue(int x) {
    x = 20;
}

void byReference(int& x) {
    x = 30;
}

void byPointer(int* x) {
    if (x) {
        *x = 40;
    }
}
int main() {
    int a = 10;
    byValue(a);       // передача по значению
    std::cout << "After byValue: " << a << std::endl; // Выведет 10

    byReference(a);   // передача по ссылке
    std::cout << "After byReference: " << a << std::endl; // Выведет 30

    byPointer(&a);    // передача по указателю
    std::cout << "After byPointer: " << a << std::endl; // Выведет 40
    }
 */