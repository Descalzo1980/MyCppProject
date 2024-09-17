#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
Порядок вызова конструкторов при множественном наследовании
 */
class Car
{
public:
  Car()
  {
    cout << "Вызван конструктор Car" << endl;
  }
  string str = "Я поле класса машина";
  void Drive()
  {
    cout << "Я еду" << endl;
  }
};

class AirPlan
{
public:
  AirPlan()
  {
    cout << "Вызван конструктор AirPlan" << endl;
  }
  string str2 = "Я поле класса самолет";
  void Fly()
  {
    cout << "Я лечу" << endl;
  }
};

class FlyingCar : public Car, public AirPlan 
/* порядок наследования важен, разный порядок вывоза конструкторов */
{
public:
  FlyingCar()
  {
    cout << "Вызван конструктор FlyingCar" << endl;
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    FlyingCar fc;
  }

  system("pause");
  return 0;
}