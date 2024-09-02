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

/*   Point(int valueX, int valueY)
  {
    x = valueX;
    y = valueY;
  } */

 Point()
 {
    x = 0;
    y = 0;
 }

  Point(int valueX, int valueY)
 {
    x = valueX;
    y = valueY;
 }

   Point(int valueX, bool boolean)
 {
    x = valueX;
    if(boolean)
    {
       y = 1; 
    }else
    {
      y = -1;
    }
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

  Point point;
  point.Print();

  Point point2(5,14);
  point2.Print();

  Point point3(5,false);
  point3.Print();

/*   Point point(5,44);
  point.Print();

  Point point2(33,66);
  point2.Print(); */

  system("pause");
  return 0;
}
