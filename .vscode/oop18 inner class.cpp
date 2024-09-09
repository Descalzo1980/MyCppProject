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

class Image
{
public:
    Image() : pixels {
        Pixel(0, 4, 64),
        Pixel(4, 4, 10),
        Pixel(111, 6, 44),
        Pixel(244, 7, 68),
        Pixel(222, 8, 51)
    }
    {}

    void GetImageInfo()
    {
        for (int i = 0; i < LENGTH; i++)
        {
            cout << "№ = " << i << " "<< pixels[i].GetInfo() << endl;
        }
    }


    static const int LENGTH = 5;

    class Pixel
    {
    public:
        Pixel(int r, int g, int b) : r(r), g(g), b(b) {}

        string GetInfo()
        {
            return "Pixel: r = " + to_string(r) + ", g = " + to_string(g) + ", b = " + to_string(b);
        }

    private:
        int r;
        int g;
        int b;
    };
private:
    Pixel pixels[LENGTH];
};

int
main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Image Image;
  Image.GetImageInfo();

  Image::Pixel pixel(8,90,222);
  cout << pixel.GetInfo() << endl;

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