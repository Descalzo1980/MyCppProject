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
  Point(int valueX, int valueY)
  {
    x = valueX;
    y = valueY;
  }

  Point()
  {
    x = 0;
    y = 0;
  }

/*   bool operator==(const Point &other) const
  {
    if(this-> x == other.x && this-> y == other.y)
    {
      return true;
    }else
    {
      return false;
    }
  } */

  bool operator==(const Point &other) const
  {
    return (x == other.x && y == other.y);
/*     return this->x == other.x && this->y == other.y; */
  }

  bool operator!=(const Point &other) const
  {
    return (x != other.x && y != other.y);
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Point a(5, 1);
  Point b(5, 1);

  bool result = a == b;

  bool result2 = a != b;

  cout << result << endl;
  cout << result2 << endl;

  system("pause");
  return 0;
}
