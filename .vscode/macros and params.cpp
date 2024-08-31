#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>
#define FOO(x,y)((x) * (y))

using namespace std;


int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  cout << FOO(5,6) << endl;

  system("pause");
  return 0;
}
