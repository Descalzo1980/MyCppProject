#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  множественное наследование
 */
class Car
{
public:
string str = "Я поле класса машина"
  void Drive()
  {
    cout << "Я еду" << endl;
  }
};

class AirPlan
{
public:
string str2 = "Я поле класса самолет"
  void Fly()
  {
    cout << "Я лечу" << endl;
  }
};

class FlyingCar : public Car, public AirPlan
{

};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {

    Car car;
    car.Drive();
    AirPlan AirPlan;
    AirPlan.Fly();
    FlyingCar fc;
    fc.Drive();
    fc.Fly();

    Car *ptrC = &fc;
    AirPlan *ptrA = &fc;

  }

  system("pause");
  return 0;
}