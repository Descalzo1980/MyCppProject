#include <iostream>
#include <locale>
#include <Windows.h>
#include <functional>
#include <vector>

using namespace std;

/*
  std:function

  Полиморфная обёртка функции

  это универсальный тип, который позволяет
  хранить, передавать и вызывать функции,
  включая указатели на функции, лямбда-выражения,
  а также объекты, которые могут вызывать оператор ()

 */
/* void hello()
{
  std::cout << "Hello, world!" << std::endl;
}

void execute(void (*func)())
{
  func();
}

void Foo()
{
  cout << "Foo()" << endl;
}

void Bar()
{
    cout << "===========Bar()============" << endl;
}

int Sum(int a, int b)
{
  return a + b;
} */

void Foo(int a)
{
  if (a > 10 && a < 40)
  {
    cout << "Foo " << a << endl;
  }
}

void Bar(int a)
{
  if (a % 2 == 0)
  {
    cout << "Bar " << a << endl;
  }
}

void DoWork(vector<int> &vc, vector<function<void(int)>> funcVector)
{
  for (auto el : vc)
  {
    for(auto &fel: funcVector)
    {
      fel(el);
    }
  }
}

int main()
{

  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");


  vector<int> vc = {1, 2, 3, 10, 22, 33, 44, 55, 66, 77, 99};

  vector<function<void(int)>> fVector;
  fVector.emplace_back(Foo);
  fVector.emplace_back(Bar);

  DoWork(vc,fVector);


  cout << "Немного уличной магии" << endl;

/* 
  DoWork(vc,Bar); */


    /*   void(*fPtr)() = hello; */

  /*   fPtr(); */

  /*   execute(fPtr); */

  /*   function<void()> f; */
  /*   function<int(int,int)> f; */

  /*   f = Foo; */
  /*   f = Bar; */
  /*   f = Sum;
    cout << f(2,3) << endl; */

  system("pause");
  return 0;
}


/* то же самое на котлине

fun main() {
    val vc = listOf(1, 2, 3, 10, 22, 33, 44, 55, 66, 77, 99)

    doWork(vc, listOf(::foo,::bar))
    println("Немного уличной магии")
    doWork(vc, ::bar)
}

fun foo(a : Int){
    if(a in 11..39){
        println("Это foo\t$a")
    }
}

fun bar(a : Int){
    if(a % 2 == 0){
        println("Это bar\t$a")
    }
}

fun doWork(vc: List<Int>, funcList: List<(Int) -> Unit>){
    for (el in vc){
        f(el)
    }
}

 */