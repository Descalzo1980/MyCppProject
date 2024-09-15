#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

/* Полиморфизм
  Виртуальные функции
  virtual
  override
 */

class Gun
{
public:
  virtual void Shoot()
  {
    cout << "BANG!" << endl;
  }
};

class SubMachineGun : public Gun
{
public:
  void Shoot() override
  {
    cout << "BANG! BANG! BANG!" << endl;
  }
};

class Bazooka : public Gun
{
public:
  void Shoot() override
  {
    cout << "BAHBAH!" << endl;
  }
};

class Player
{
  public:
   void Shoot(Gun *gun)
  {
    gun->Shoot();
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
    Bazooka Bazooka;

/*     Gun *weapon = &gun; BANG */
    Gun *weapon = &machingun; // BANG BANG BANG
    weapon->Shoot();

    Player player;
    player.Shoot(&Bazooka);
  }

  system("pause");
  return 0;
}