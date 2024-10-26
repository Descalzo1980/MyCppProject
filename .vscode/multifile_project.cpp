#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>
#include "SumHeader.h"

using namespace std;
/*
typedef
Многофайловый проект
 */


int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  int result = SumHeader(2,3);
  
  cout<< result << endl;
    
  system("pause");
  return 0;
}