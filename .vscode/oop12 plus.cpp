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
  int & operator[](int index)
  {
    return arr[index];
  }
private:
  int arr[5]{5, 44, 777, 789, 99};
};

int
main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  TestClass a;
  cout << a[0] << endl;
  a[0] = 100;
  cout << a[0] << endl;
  
  system("pause");
  return 0;
}
