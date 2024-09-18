#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

/*
Запись ОБЪЕКТА КЛАССА в файл
 */

class Point
{
public:
  Point()
  {
    x = y = z = 0;
  }
  Point(int x, int y, int z)
  {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  void Print()
  {
    cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
  }
  int x;
  int y;
  int z;
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  string path = "mamaIAmHacker.txt";

  /*   Point point(15, 110, 151);

    ofstream fout;
    fout.open(path, ofstream::app); // так дописываем в конец

    if (!fout.is_open())
    {
      cout << "Ошибка открытия файла" << endl;
    }
    else
    {
      cout << "Файл открыт" << endl;
      fout.write((char*)&point,sizeof(Point));
    }
    fout.close(); */

  ifstream fin;
  fin.open(path);

  if (!fin.is_open())
  {
    cout << "Ошибка открытия файла" << endl;
  }
  else
  {
    cout << "Файл открыт" << endl;
    Point pnt;
    while (fin.read((char *)&pnt, sizeof(Point)))
    {
      pnt.Print();
    }
  }

  fin.close();

  system("pause");
  return 0;
}