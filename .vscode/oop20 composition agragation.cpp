#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
// Агрегация и композиция

class Cap // агрегация, то есть класс не привязан жестко к другому классу
{
  public:
  string GetColor()
  {
    return color;
  }
  private:
  string color = "красная";
};

class Model
{
  public:
  void inspectModel()
  {
    cout << "Кепка " << cap.GetColor() << endl;
  }
  private:
  Cap cap;
};

class Human
{
  public:
  void Think()
  {
    brain.Think();
  }
  void InspectTheCap()
  {
    cout << "Моя кепка" << " "<< cap.GetColor() << endl;
  }
  private:
  class Brain
  {
    public:
    void Think()
    {
      cout << "Я думаю!" << endl;
    }
  };
  Brain brain; // композиция, то есть жесткая привязка одного объекта к другому
  Cap cap; // агрегация, то есть класс не привязан жестко к другому классу
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Human human;

  human.Think();
  human.InspectTheCap();
  Model model;
  model.inspectModel();

  system("pause");
  return 0;
}