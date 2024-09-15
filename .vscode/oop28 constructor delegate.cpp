#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  Делегирующий конструктор
 */

class Human
{
public:
  Human(string Name)
  {
    this->Name = Name;
    this->Age = 0;
    this->Weight = 0;
  }

  Human(string Name, int Age): Human(Name)
  {
    this->Age = Age;
  }

  Human(string Name, int Age, int Weight): Human(Name,Age)
  {
    this->Weight = Weight;
  }

  string Name;
  int Age;
  int Weight;
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    Human Human("Алеша", 30,70);
    cout << Human.Name << endl;
    cout << Human.Age << endl;
    cout << Human.Weight << endl;
  }

  system("pause");
  return 0;
}