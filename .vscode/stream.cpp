#include "stdafx.h"

using namespace std;

class MyString
{
private:
  char *str;

public:
  MyString()
  {
    str = nullptr;
  }
  MyString(const char *str)
  {

    int length = strlen(str);
    this->str = new char[length + 1];

    for (int i = 0; i < length; i++)
    {
      this->str[i] = str[i];
    }
    this->str[length] = '\0';
  }

  MyString &operator=(const MyString &other)
  {
    if (this != &other)
    {
      delete[] str;

      if (other.str != nullptr)
      {
        int length = strlen(other.str);
        str = new char[length + 1];
        strcpy(str, other.str);
      }
      else
      {
        str = nullptr;
      }
    }
    return *this;
  }
  MyString operator+(const MyString &other)
  {
    MyString newstr;
    int thisLength = strlen(this->str);
    int otherLength = strlen(other.str);
    newstr.str = new char[thisLength + otherLength + 1];
    int i = 0;
    for (; i < thisLength; i++)
    {
      newstr.str[i] = this->str[i];
    }
    for (int j = 0 ; j < otherLength; j++,i++)
    {
      newstr.str[i] = other.str[j];
    }
    newstr.str[thisLength + otherLength] = '\0';
    return newstr;
  }

  ~MyString()
  {
    delete[] this->str;
  }

  void Print()
  {
    cout << str;
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  MyString str("Hello");
  MyString str1("World");
/*   str = str1; */
/*   str.Print();
  str1.Print(); */

  MyString result = str + " " +str1;
  result.Print();
  cout << endl;

  system("pause");
  return 0;
}
