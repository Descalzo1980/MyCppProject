#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  int a;
  cout << "введите число " << endl;
  cin >> a;
/*   if (a < 10)
  {
    cout << "a меньше десяти" << endl;
  }

  else if (a > 10)
  {
    cout << "a больше десяти" << endl;
  }

  else
  {
    cout << "a равно десяти" << endl;
  } */

  (a < 10) ? (cout << "a меньше десяти") : (a > 10) ? (cout << "a больше десяти" << endl) : (cout << "a равно десяти" << endl);

  system("pause");
  return 0;
}
