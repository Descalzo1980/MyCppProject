#include <iostream>
using namespace std;

int main() 
{
    // Устанавливаем локаль на русский
    setlocale(LC_ALL, "Russian");

    std::wcout << "Стоит баба с жопой метр на метр\n\
В очереди за продовольствием.\n\
Отрастить бы себе хyй\n\
В километр\n\
И доставить ей\n\
Удовольствие!\n" << std::endl;

    return 0;
}