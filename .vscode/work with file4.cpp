#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

/*
fstream чтение и сохранение данных
 */

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  string path = "mamaIAmHacker.txt";
  fstream fs;
  fs.open(path, fstream::in | fstream::out | fstream::app);

  if (!fs.is_open())
  {
    cout << "Ошибка открытия файла" << endl;
  }
  else
  {
    int value;
    string msg;
    cout << "Файл открыт" << endl;
    cout << "Введите 1 для записи сообщения в файл: " << endl;
    cout << "Введите 2 для чтения сообщения из файла: " << endl;
    cin >> value;
    cin.ignore();
    if (value == 1)
    {
      cout << "Введите ваше сообщение" << endl;
      getline(cin, msg);
      fs << msg << "\n";
    }
    if (value == 2)
    {
      cout << "Чтение данных из файла" << endl;
      while (!fs.eof())
      {
        msg = "";
        getline(fs, msg);
        cout << msg << endl;
      }
    }
  }
  fs.close();
  system("pause");
  return 0;
}