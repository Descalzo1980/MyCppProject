#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

using namespace std;

class Point
{

private:
  int x;
  int y;
public:

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



  Point point;
  point.SetX(55);
  cout << point.GetX() << endl;
  point.Print();

  system("pause");
  return 0;
}
