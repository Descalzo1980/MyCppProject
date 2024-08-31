#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>

using namespace std;

string GetDataFromDB()
{
  return "Data from DB";
}

string GetDataFromWebServer()
{
  return "Data from WebServer";
}


string GetDataFromOneOldLady()
{
  return "Data from OneOldLady";
}

void ShowInfo(string (*foo)())
{
  cout << foo() << endl;
}

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  ShowInfo(GetDataFromDB);
  ShowInfo(GetDataFromWebServer);
  ShowInfo(GetDataFromOneOldLady);

  system("pause");
  return 0;
}
