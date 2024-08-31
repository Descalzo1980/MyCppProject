#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>
#define PI 3.14
#define tab "\t"

using namespace std;


int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  cout << PI << endl;

  cout << "text" << tab << "text"<< endl;

  system("pause");
  return 0;
}
