#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  Множественное наследование одинаковые методы
 */
class Car
{
public:
  void Use()
  {
    cout << "Я еду" << endl;
  }
};

class AirPlan
{
public:
  void Use()
  {
    cout << "Я лечу" << endl;
  }
};

class FlyingCar : public Car, public AirPlan
{
public:
  
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    FlyingCar fc;
    ((Car)fc).Use();
    ((AirPlan)fc).Use();
    cout << endl << endl;
  }

  system("pause");
  return 0;
}