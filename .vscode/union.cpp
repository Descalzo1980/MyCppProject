#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>

using namespace std;
/*
  union позволяет

  в одной и той же области памяти

  хранить одни и

  те же данные

  но только одно

  значение может быть

  актуальным в каждый момент времени

 */

union Data
{
  int integer; // 4 байта
  float floating; // 4 байта
  char character; // 1 байт
  short shorter; // 2 байта

  // памяти выделается исходя из самого большое, если меньше, забивается нулями
};

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Data data;

  data.integer = 10;
  std::cout << "Integer: " << data.integer << std::endl;

  data.floating = 5.5;
  std::cout << "Float: " << data.floating << std::endl;

  data.character = 'A';
  std::cout << "Character: " << data.character << std::endl;

  data.shorter = 42;
  std::cout << "Shorter: " << data.shorter << std::endl;

  system("pause");
  return 0;
}
