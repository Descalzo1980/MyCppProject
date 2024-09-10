#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Pixel
{
public:
  Pixel()
  {
/*     r = 0;
    g = 0;
    b = 0; */
    r = g = b = 0;
  }

  Pixel(int r, int g, int b) : r(r), g(g), b(b) {}

  string GetInfo()
  {
    return "Pixel: r = " + to_string(r) + ", g = " + to_string(g) + ", b = " + to_string(b);
  }
  int r;
private:
/*   int r; */
  int g;
  int b;
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  const int LENGTH = 5;

/*   Pixel p(11,44,66);
  cout << p.GetInfo() << endl; */

  Pixel arr[LENGTH]
  {
    Pixel(22,33,44),
    Pixel(33,33,44),
    Pixel(44,33,44),
    Pixel(55,33,44),
    Pixel(66,33,44)
  };

/*   cout << arr[0].r */


  Pixel *arr1 = new Pixel[LENGTH];

  arr1[0] = Pixel(77,77,77);

  cout << arr1[0].GetInfo() << endl;

  delete [] arr1;

  arr[0] = Pixel(22,33,44);

  cout<< arr[0].GetInfo() << endl;

  system("pause");
  return 0;
}