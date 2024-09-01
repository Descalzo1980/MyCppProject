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
};

class Point
{
  public:

  int x;
  int y;
  int z;
};

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Human firstHuman;
  firstHuman.age = 42;
  firstHuman.name = "First";
  firstHuman.weight = 100;

  cout << firstHuman.age << endl;
  cout << firstHuman.name << endl;
  cout << firstHuman.weight << endl;

  Human secondHuman;
  secondHuman.age = 24;
  secondHuman.name = "Second";
  secondHuman.weight = 55;

  cout << secondHuman.age << endl;
  cout << secondHuman.name << endl;
  cout << secondHuman.weight << endl;

  Point point;
  point.x = 2;
  point.y = 4;
  point.z = 3;

  system("pause");
  return 0;
}
