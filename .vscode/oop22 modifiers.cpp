#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class A
{
public:
  string msgOne = "Сообщение один"; // доступ везде

private:
  string msgTwo = "Сообщение два"; // нигде кроме класса в котором создали

protected:
  string msgThree = "Сообщение три"; // можно в классах наследниках, в объектах фигос
};
// тут public -> public
// если private -> всё станет private
// если protected -> то станет private

// https://studfile.net/preview/4379462/
class B : public A 
{
  public:
  void PrintMsg()
  {
    cout << msgOne << endl;
/*     cout << msgTwo << endl;  */
  cout << msgThree << endl;
  }
};

int
main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  B b;
  b.PrintMsg();
  system("pause");
  return 0;
}