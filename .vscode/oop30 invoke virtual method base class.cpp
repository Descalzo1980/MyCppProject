#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  вызов метода базового класса
 */

class Msg
{
public:
  Msg(string msg)
  {
    this->msg = msg;
  }
  virtual string GetMsg()
  {
    return msg;
  }

private:
  string msg;
};

class BraketMsg: public Msg
{
  public:
  BraketMsg(string msg):Msg(msg)
  {

  }
  string GetMsg() override
  {
    return "[" + ::Msg::GetMsg() + "]";
  }
};

class Printer
{
public:
  void Print(Msg *msg)
  {
    cout << msg->GetMsg() << endl;
  }
};

int
main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
/*     Msg msg("Привет");
    Printer printer;
    printer.Print(&msg); */

    BraketMsg br("Привет со скобками");
    Printer printer;
    printer.Print(&br);
  }

  system("pause");
  return 0;
}