#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>

using namespace std;

/*
try catch
 */

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  string path = "mamaIAmHack.tx";
  ifstream fin;

  fin.exceptions(ifstream::badbit | ifstream::failbit);
  try
  {
    cout << "Попытка открытия файла" << endl;
    fin.open(path);
    cout << "Файл успешно открыт" << endl;
  }
  catch (const ifstream::failure &e)
  {
    std::cerr << e.what() << '\n';
    cout << e.code() << '\n';
    cout << "Ошибка открытия файла" << endl;
  }

  system("pause");
  return 0;
}