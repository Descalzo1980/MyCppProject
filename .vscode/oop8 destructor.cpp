#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

using namespace std;

class MyClass
{
private:
  int *data;

public:
  MyClass(int size)
  {
    data = new int[size];
    for (int i = 0; i < size; i++)
    {
      data[i] = i;
    }

    cout << "Объект создан, данные: ";
    for (int i = 0; i < size; i++)
    {
      cout << data[i] << " ";
    }
    cout << "Вызвался конструктор" << endl;
  }
  ~MyClass()
  {
    cout << "Данные объекта перед удалением: ";
    for (int i = 0; i < 10; i++)
    {
      cout << data[i] << " ";
    }
    cout << "Вызвался деструктор" << endl;

    delete[] data;
  }
};

void Foo()
{
  cout << "Foo start" << endl;
  MyClass myClass(10);
  cout << "Foo end" << endl;
}

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Foo();

  Sleep(3000);
  return 0;
}
