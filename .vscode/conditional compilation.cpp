#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>
#define DEBUG
using namespace std;


int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");
  
#ifdef DEBUG
    cout << "Есть дебаг" << endl;
#else 
    cout << "Нет дебаг" << endl;
#endif

  system("pause");
  return 0;
}
