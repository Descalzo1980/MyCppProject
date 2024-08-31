#include <iostream>
#include <locale>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <Windows.h>

using namespace std;

int Foo1(int a)
{
  return a - 1;
}

int Foo2(int a)
{
  return a * 2;
}

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  int(*fooPointer)(int a);
  fooPointer = Foo1;
  cout << fooPointer(5) << endl;

  int(*fooPointer1)(int a);
  fooPointer1 = Foo2;
  cout <<  fooPointer1(5) << endl;

  system("pause");
  return 0;
}
/*

чисто коллбеки в котлине

fun foo1(){
    println("Foo1")
}

fun foo2(result : Int): Int{
    return result * 2
}

fun main(){

    val fooPointer: () -> Unit = ::foo1

    fooPointer()

    val fooPointer1: (Int) -> Int = ::foo2

    println(fooPointer1(5))

} */
/*
Ctrl + Shift + Space: посмотреть параметры
 */