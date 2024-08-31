#include <iostream>
#include <locale>
#include <Windows.h>
using namespace std;



int main(int argc, char* argv[])
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  for (int i = 0; i < argc; i++)
  {
     cout << argv[i] << endl;
    
  }
  

  system("pause");
  return 0;
}
