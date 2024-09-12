#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class A
{
  public:
  A()
  {
    cout << "Вызвался конструктор А" << endl;
  }
};

class B : public A 
{
  public:
  B()
  {
    cout << "Вызвался конструктор В" << endl;
  }
};

class C : public B 
{
  public:
  C()
  {
    cout << "Вызвался конструктор C" << endl;
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

    int a, b;
    std::cin >> a >> b;

    int sum = a + b; 

    std::cout << "Sum: " << sum << std::endl;

  system("pause");
  return 0;
}