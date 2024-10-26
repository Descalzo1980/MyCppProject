#include <iostream>
#include <windows.h>
#include <vector>

typedef std::vector<int> int_vector;
typedef std::vector<float> float_vector;

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

  for (size_t i = 0; i < myVector2.size(); i++)
  {
    /* size_t это тоже псевдоним */
  }
  
    
  system("pause");
  return 0;
}