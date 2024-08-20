#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int symbolCount;
    char sybo1;
    int lineType;
    int index = 0;

    cout << "Введите количество символом в линии" << endl;
    cin >> symbolCount;

    cout << "введите символ" << endl;
    cin >> sybo1;
    cout << "Выберите тип линии: " << endl
         << "1 - вертикальная линия" << endl
         << "2 - горизонтальная линия" << endl;
    cin >> lineType;

    if(lineType !=1 && lineType !=2)
    {
        cout << "Не корректный тип линии!" << endl;
        return 1;
    }

    while (index < symbolCount)
    {
        if (lineType == 1)
        {
            cout << sybo1 << endl;
        }
        if (lineType == 2)
        {
            cout << sybo1;
        }
       
        index++;
    }

    cout << endl << endl;
}

