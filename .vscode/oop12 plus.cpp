#include <iostream>
#include <windows.h>

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

  Point operator+(const Point &other)
  {
    Point temp;
    temp.x = this->x + other.x;
    temp.y = this->y + other.y;
    return temp;
  }

  int getX() const { return x; }
  int getY() const { return y; }

  Point &operator++()
  {
    this->x++;
    this->y += 1;
    return *this;
  }

  Point operator++(int)
  {
    Point temp(*this);
    this->x++;
    this->y++;
    return temp;
  }

  Point &operator--()
  {
    this->x--;
    this->y -= 1;
    return *this;
  }

  Point operator--(int)
  {
    Point temp(*this);
    this->x--;
    this->y--;
    return temp;
  }

  friend std::ostream &operator<<(std::ostream &os, const Point &point)
  {
    os << "Point(" << point.x << ", " << point.y << ")";
    return os;
  }
};

class TestClass
{
public:
private:
  int arr[]{5, 44, 777, 789, 99};
}

int
main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Point a(1, 1);

  Point b = a++;  // сначала присвоится, потом увеличится
  Point b1 = ++a; // сначала увеличится, потом присвоится

  cout << b << endl;
  cout << b1 << endl;

  Point b2 = a--;
  Point b3 = --a;

  cout << b2 << endl;
  cout << b3 << endl;

  system("pause");
  return 0;
}
