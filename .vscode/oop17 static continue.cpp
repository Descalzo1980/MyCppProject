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
    // apple.weight;// пока, инкапсуляция))
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
    count++;
    id = count;
  }

  int GetId()
  {
    return id;
  }

  static int GetCount()
  {
    return count;
  }

  static void ChangeColor(Apple &apple, string color)
  {
    apple.color = color;
  }

  void ChangeColorNotStatic(string color)
  {
    this->color = color;
  }

private:
  int weight;
  string color;
  int id;
  static int count;
};

int Apple::count;

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Apple apple(150, "Red");

  apple.ChangeColor(apple, "Yellow");
  Apple::ChangeColor(apple, "Yellow");

/*   Apple apple1(150, "Red"); */
  //Apple::count = -5;// сломал)
/*   Apple apple2(150, "Red");
  Human human;
  human.takeApple(apple); */

/*   cout << apple.count << endl;
  cout << Apple::count << endl; // одна фигня */

/*   cout << "Id = " << apple.GetId() << endl;
  cout << "Id = " << apple1.GetId() << endl;
  cout << "Id = " << apple2.GetId() << endl;
  cout << "Count = " << Apple::GetCount() << endl; */
  system("pause");
  return 0;
}

void Human::takeApple(Apple &apple)
{
  apple.color = "Blue"; // пока, инкапсуляция))
  cout << "TakeApple " << endl
       << "Вес яблока " << apple.weight << endl
       << "Цвет яблока " << apple.color << endl;
};