#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
namespace
пространство имен
 */
namespace firstNS
{
  void Foo()
  {
    cout << "Я первая Foo" << endl;
  }
}

namespace secondNS
{
  void Foo()
  {
    cout << "Я вторая Foo" << endl;
  }
}

namespace secondNS
{
  void Foo2()
  {
    cout << "Я вторая вторая Foo" << endl;
  }
}

namespace thisNS{
namespace secondNS
{
  void Foo()
  {
    cout << "Я вторая вторая и немного третья Foo" << endl;
  }
}
}

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  firstNS::Foo();
  secondNS::Foo();
  secondNS::Foo2();
  thisNS::secondNS::Foo();

    
  system("pause");
  return 0;
}