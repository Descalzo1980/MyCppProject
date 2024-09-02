#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

using namespace std;

class CoffeGrinder
{
public:
  void Start()
  {
    bool VoltageIsNormal = CheckVoltage();
    if(VoltageIsNormal == true)
    {
      cout << "Whoosh" << endl;
    }else
    {
      cout << "Not Whoosh! Beep Beep" << endl;
    }

  }

private:
  bool CheckVoltage()
  {
    return false;
  }
};

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  CoffeGrinder coffeGrinder;
  coffeGrinder.Start();

  system("pause");
  return 0;
}
