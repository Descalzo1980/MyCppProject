#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

using namespace std;

class Human
{
public:
  int age;
  int weight;
  string name;

  void Print()
  {
    cout << "Имя: " << name << "\nВес: " << weight << "\nВозраст: " << age << endl
         << endl;
  }
};

class Point
{
public:
  int x;
  int y;

  void Print()
  {
    cout << ab << endl;
    PrintZ();
  }

private:
  int z;

  void PrintZ()
  {
    cout << z << endl;
    cout << "PrintZ()" << endl;
  }

protected:
  int ab;
};

class SecondPoint : public Point
{
public:
   setAb(int value)
  {
    ab = value;
  }

  int getAb() const
  {
    return ab;
  }
};

int
main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  SecondPoint secondPoint;
  secondPoint.setAb(66);
  std::cout << "Значение ab " << secondPoint.getAb() << std::endl;

  Point point;
  point.Print();

  system("pause");
  return 0;
}
