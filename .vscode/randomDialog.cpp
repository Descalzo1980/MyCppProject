#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  std::vector<std::string> words = {"25", "Неправда", "А сколько"};

  std::srand(static_cast<unsigned>(std::time(nullptr)));

  while (true)
  {
    int randomIndex = std::rand() % words.size();
    std::cout << words[randomIndex] << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  system("pause");
  return 0;
}