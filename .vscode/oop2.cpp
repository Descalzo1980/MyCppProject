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
    cout << "Имя: "<<name<<"\nВес: "<< weight<<"\nВозраст: "<< age<<endl<<endl;
  }

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
  firstHuman.age = 22;
  firstHuman.name = "Седьмой";
  firstHuman.weight = 55;

  firstHuman.Print();

  Human secondHuman;
  secondHuman.Print();

  system("pause");
  return 0;
}
