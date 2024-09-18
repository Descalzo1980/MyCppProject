#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

/*
сохранение данных в файл
 */

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  string path = "mamaIAmHaker.txt";
  ofstream fout;
  fout.open(path, ofstream::app); // так дописываем в конец

  if (!fout.is_open())
  {
    cout << "Ошибка открытия файла" << endl;
  }
  else
  {
    for (int i = 0; i < 5; i++)
    {
      cout << "Введите телефон" << endl;
      string a;
      cin >> a;
      fout << "\n"
           << a;
    }
  }
  fout.close();

  system("pause");
  return 0;
}