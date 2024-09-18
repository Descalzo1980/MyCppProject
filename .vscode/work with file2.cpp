#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

/*
Чтение из файла
 */

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  string path = "mamaIAmHacker.txt";
  ifstream fin;
  fin.open(path);

  if (!fin.is_open())
  {
    cout << "Ошибка открытия файла" << endl;
  }
  else
  {
    cout << "Файл открыт" << endl;
    string str;
/*     char ch;
    while (fin.get(ch))
    {
      cout << ch;
    } */
   while (!fin.eof())
   {
    str = "";
    getline(fin,str);
    cout << str << endl;
   }
   
  }
  fin.close();

  system("pause");
  return 0;
}