#include <iostream>
#include <windows.h>
#include <vector>

typedef std::vector<int> int_vector;

/*
typedef
используется чтобы определенным типам данных присваивать alias
псеводим
 */


int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");


  std::vector<int> myVector;

  int_vector myVector2;
    
  system("pause");
  return 0;
}