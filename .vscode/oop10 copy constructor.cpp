#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

using namespace std;

class MyClass
{
public:
  int *data;

  MyClass(int size)
  {
    this-> Size = size;
    this->data = new int [size];

    for (int i = 0; i < size; i++)
    {
      data[i] = i;
    }
    
    cout << "Вызался конструктор " << this << endl;
  };

  MyClass(const MyClass &other)
  {
    this->Size = other.Size;
    this -> data = new int [other.Size];
    for (int i = 0; i < other.Size; i++)
    {
      this->data[i] = other.data[i];
    }
    
    cout << "Вызвался конструктор копирования" << this << endl;
  }

  ~MyClass()
  {
    cout << "Вызвался деструктор " << this << endl;
    delete[] data;
  }
  private:
  int Size;
};

void Foo(MyClass value)
{
  cout << "Вызвалась функция Foo Передача по значению (по умолчанию)" << endl;
}
/*
void Foo(MyClass& value)
{
    cout << "Вызвалась функция Foo Передача по ссылке" << endl;
}

void Foo(MyClass* value)
{
    cout << "Вызвалась функция Foo Передача по указателю" << endl;
}
 */

MyClass Foo2()
{

  cout << "Вызвалась функция Foo2()" << endl;
  MyClass temp(2);
  
  return temp;
}

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  MyClass a(10);

/*   Foo(MyClass); */

  MyClass b(a);

/*   Foo2(); */

  Sleep(5000);
  /* system("pause"); */
  return 0;
}
