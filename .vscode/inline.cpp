#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

inline int Sum(int a, int b)
{
    return a + b;
}


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");



    system("pause");

    return 0;
}

/* 
В C++ inline больше используется для обычных функций, 
особенно небольших, чтобы уменьшить накладные расходы на вызов.


В Kotlin inline часто применяется для функций с лямбдами, 
чтобы избежать создания дополнительных объектов и улучшить 
производительность.


inline fun <T> measureTime(block: () -> T): T {
    val start = System.currentTimeMillis()
    val result = block()
    val end = System.currentTimeMillis()
    println("Elapsed time: ${end - start} ms")
    return result
}

fun main() {
    val sum = measureTime {
        (1..1000).sum()
    }
    println("Sum: $sum")
} */