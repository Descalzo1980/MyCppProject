#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Human
{
private:
  string name = "Ололоша Первый";

public:
  string getName()
  {
    return name;
  }
  void setName(string newName) {
        this->name = newName;
    }
};

class Student : public Human
{
public:
  string group;
  void Learn()
  {
    cout << "Я учусь" << endl;
  }
};
class Professor : public Human
{
public:
  string subject;
};
class ExtramuralStudent : public Student
{
public:
  void Learn()
  {
    cout << "Я тоже учусь, но хожу в институт сильно реже" << endl;
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Student Student;
  Student.Learn();
  cout << Student.getName() << endl;
  Professor Professor;

  ExtramuralStudent ExtramuralStudent;
  ExtramuralStudent.Learn();
  ExtramuralStudent.getName();
  string name;
  cout << "Выберите имя: ";
  cin >> name;
  ExtramuralStudent.setName(name);
  cout << "Новое имя: " << ExtramuralStudent.getName() << endl;
  Professor.setName("Ефрондосья");
    cout << "Новое имя: " << Professor.getName() << endl;
  system("pause");
  return 0;
}