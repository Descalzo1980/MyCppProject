#include "stdafx.h"

using namespace std;

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");


  cout << "Проверка вывода текста на русском языке.\n";


  cout << "Accented characters: é, ñ, ü, ç.\n";

  system("pause");
  return 0;
}
