#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  интерфейс, их вроде как и нет в ++
 */

class IBicycle
{
public:
  void virtual TwistTheWheel() = 0;
  // если есть хоть один виртуальный метод, класс сразу абстрактный
  void virtual Ride() = 0;
};

class SimpleBicycle : public IBicycle
{
public:
  void virtual TwistTheWheel() override
  {
    cout << "Метод TwistTheWheel() класс SimpleBicycle" << endl;
  }

  void virtual Ride() override
  {
    cout << "Метод Ride() класс SimpleBicycle" << endl;
  }
};

class SportBicycle : public IBicycle
{
  public:
  void virtual TwistTheWheel() override
  {
    cout << "Метод TwistTheWheel() класс SportBicycle" << endl;
  }

  void virtual Ride() override
  {
    cout << "Метод Ride() класс SportBicycle" << endl;
  }
};

class Human
{
public:
  void RideOn(IBicycle &bicycle)
  {
    cout << "Крутим руль" << endl;
    bicycle.TwistTheWheel();
    cout << endl
         << "Едем" << endl;
    bicycle.Ride();
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    SimpleBicycle SimpleBicycle;
    SportBicycle SportBicycle;
    Human h;
    h.RideOn(SimpleBicycle);
    cout << endl;
    h.RideOn(SportBicycle);
  }

  system("pause");
  return 0;
}