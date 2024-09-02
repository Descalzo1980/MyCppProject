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
    if(CheckVoltage())
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

class Point
{

private:
  int x;
  int y;
public:

  Point(int valueX, int valueY)
  {
    x = valueX;
    y = valueY;
  }

  int GetY()
  {
    return y;
  }

  void SetY(int y)
  {
    this->y = y * 2;
  }

  int GetX()
  {
    return x;
  }

  void SetX(int x)
  {
    this->x = x * 2;
  }

  void Print()
  {
    cout << "X = " << x << "\t Y = " << y << endl << endl;
  }

};

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  CoffeGrinder coffeGrinder;
  coffeGrinder.Start();


  Point point(5,44);
  point.Print();

  Point point2(33,66);
  point2.Print();

  system("pause");
  return 0;
}
