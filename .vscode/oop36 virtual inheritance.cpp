#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
Виртуальное наследование, Ромбовидное наследование
 */

class Component
{
public:
  Component(string companyName)
  {
    cout << "коструктор Component" << endl;
    this->companyName = companyName;
  }
  string companyName;
};

class GPU : public Component
{
public:
  GPU(string companyName) : Component(companyName)
  {
    cout << "конструктор GPU" << endl;
  }
};

class Memory : public Component
{
public:
  Memory(string companyName) : Component(companyName)
  {
    cout << "конструктор Memory" << endl;
  }
};

class GraphicCard : public GPU, public Memory
{
public:
  GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
  {
    cout << "конструктор GraphicCard" << endl;
  }
};

class Character
{
public:
  Character()
  {
    cout << "конструктор Character" << endl;
  }
  int HP; // проблема с HP из за множественного наследования
};

class Orc : public virtual Character // add virtual
{
public:
  Orc()
  {
    cout << "конструктор Orc" << endl;
  }
};

class Warrior : public virtual Character
{
public:
  Warrior()
  {
    cout << "конструктор Warrior" << endl;
  }
};

class OrcWarrior : public Orc, public Warrior
{
public:
  OrcWarrior()
  {
    cout << "конструктор OrcWarrior" << endl;
  }
};

/*
конструктор Character
конструктор Orc
конструктор Warrior
конструктор OrcWarrior
после добавления virtual нет два раза вызова Character,
 ромбовидное и виртуальное наследование в действии
 */

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    /*     GraphicCard gc("AMD", "Samsung"); */

    OrcWarrior OrcWarrior;
  }

  system("pause");
  return 0;
}