#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class A
{
public:
  A()
  {
    msg = "Пустое сообщение";
  }
  A(string msg)
  {
    this->msg = msg;
  }

  void PrintMsg()
  {
    cout << msg << endl;
  }
  void setMsg(string msg)
  {
    this->msg = msg;
  };

private:
  string msg;
};

class B : public A
{
public:
// явный вызов нужного конструктора, если не прописать, будет вызван конструктор по умолчанию
  B():A("а йа уже второй контруктор класса А") 
  {

  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    A a("Йа второй конструктор");
    a.PrintMsg();
    A a2;
    a2.PrintMsg();

    B b;
    b.PrintMsg();
  }

  system("pause");
  return 0;
}