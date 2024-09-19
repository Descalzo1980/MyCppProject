#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
перегрузка оператора потокового ввода вывода
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

private:
  int x;
  int y;
  int z;
  friend ostream &operator<<(ostream &os, const Point &point);
  friend istream &operator>>(istream &is, Point &point);
};

ostream &operator<<(ostream &os, const Point &point)
{
  os << point.x << " " << point.y << " " << point.z << endl;
  return os;
}

istream &operator>>(istream &is, Point &point)
{
  is >> point.x >> point.y >> point.z;
  return is;
}

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  /*   Point point(115, 1201, 1520); */

  /*   cout << point; */

  string path = "mamaIAmHacker.txt";
  fstream fs;
  fs.open(path, fstream::in | fstream::out | fstream::app);

  if (!fs.is_open())
  {
    cout << "Ошибка открытия файла" << endl;
  }
  else
  {
    cout << "Файл открыт" << endl;
    /*     fs << point << "\n"; */

    Point point;
    fs >> point;
    string msg;
    cout << point;
    /*     while (fs >> point) */
    while (true) // проверка на конец файла есть ниже, !fs.eof() уже не нужен
    {
      /*       getline(fs, msg);
            cout << point << endl; */
      fs >> point;
      if (fs.eof())
      {
        break;
      }
      cout << point << endl;
    }

    fs.close();
    ShellExecute(NULL, "open", path.c_str(), NULL, NULL, SW_SHOWNORMAL);
  }

  system("pause");
  return 0;
}