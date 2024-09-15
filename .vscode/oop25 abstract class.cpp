#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/* Абстрактные классы
  Чистые Виртуальные функции
  virtual
  override
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

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  {
    Gun gun;
    SubMachineGun machingun;
    Bazooka bazooka;
    Knife knife;

    Player player;
    player.Shoot(&knife);
    knife.Foo();
  }

  system("pause");
  return 0;
}