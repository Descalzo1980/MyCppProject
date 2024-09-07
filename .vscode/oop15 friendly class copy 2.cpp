#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
class Apple;

class Human
{
public:
  void takeApple(Apple &apple);
  void eatApple(Apple &apple)
  {
    //apple.weight;// пока, инкапсуляция))
  }
};

class Apple
{

  friend Human;
public:
  Apple(int weight, string color)
  {
    this->color = color;
    this->weight = weight;
  }

private:
  int weight;
  string color;
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Apple apple(150, "Red");
  Human human;
  human.takeApple(apple);

  system("pause");
  return 0;
}

void Human::takeApple(Apple &apple)
{
  apple.color = "Blue"; // пока, инкапсуляция))
  cout << "TakeApple " << endl << "Вес яблока " << apple.weight << endl << "Цвет яблока " << apple.color << endl;

};