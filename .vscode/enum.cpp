#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
enum
 */

class PC
{
public:
  enum PCState
  {
    ON,
    OFF,
    SLEEP,
    EAT
  };

  enum Speed
  {
    MIN,
    RECOMEND,
    MAX
  };

  PCState
  GetState()
  {
    return State;
  }

  void SetState(PCState State)
  {
    this->State = State;
  }

  Speed GetSpeed() { return Speed; }
  void SetSpeed(Speed s) { Speed = s; }

  const char *GetSpeedAsString()
  {
    static const char *speedStrings[] = {"Медленно", "Нормально", "Быстро"};
    return speedStrings[Speed];
  }

private:
  PCState State;
  Speed Speed;
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  PC pc;

  pc.SetState(PC::PCState::EAT);
  pc.SetSpeed(PC::Speed::RECOMEND);

  switch (pc.GetState())
  {
  case PC::PCState::ON:
    cout << "Компьютер включили" << endl;
    break;
  case PC::PCState::OFF:
    cout << "Компьютер выключен" << endl;
    break;
  case PC::PCState::SLEEP:
    cout << "Компьютер в режиме сна" << endl;
    break;
  default:
    cout << "Компьютер ест!" << endl;
  }

  cout << "Скорость: " << pc.GetSpeedAsString() << endl;

  system("pause");
  return 0;
}