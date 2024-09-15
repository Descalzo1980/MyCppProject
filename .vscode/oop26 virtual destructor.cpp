#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/*
  Виртуальный деструктор
 */

class Weapon
{
public:
  virtual void Shoot() = 0;
  void Foo()
  {
    cout << "Foo!" << endl;
  };
};

class Gun : public Weapon
{
public:
  void Shoot() override
  {
    cout << "Бах!" << endl;
  }
};

class SubMachineGun : public Gun
{
public:
  void Shoot() override
  {
    cout << "Бах! Бах! Бах!" << endl;
  }
};

class Bazooka : public Weapon
{
public:
  void Shoot() override
  {
    cout << "Бабах!" << endl;
  }
};

class Knife : public Weapon
{
public:
  void Shoot() override
  {
    cout << "Вжух!" << endl;
  }
};

class Player
{
public:
  void Shoot(Weapon *weapon)
  {
    weapon->Shoot();
  }
};

class A
{
public:
  A()
  {
    cout << "выделена динамическая память, объект класса А" << endl;
  }
  virtual ~A() // тут надо использовать virtual
  {
    cout << "освобождена динамическая память, объект класса А" << endl;
  }
};

class B : public A
{
public:
  B()
  {
    cout << "выделена динамическая память, объект класса B" << endl;
  }
  ~B() override
  {
    cout << "освобождена динамическая память, объект класса B" << endl;
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    A *bpnr = new B; // ололо, утечка если без virtual и override в деструкторах
    delete bpnr;
  }

  system("pause");
  return 0;
}