#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, selections;
    char repeat;

    do
    {
        cout << "Введите 2 числа" << endl;
        cin >> a >> b;
        cout << "Выберите математическую операцию" << endl
             << "1. Сложение" << endl
             << "2. Вычитание" << endl
             << "3. Умножение" << endl
             << "4. Деление" << endl;

        cin >> selections;

        switch (selections)
        {
        case 1:
            cout << "Результат сложения: " << a + b << endl;
            break;
        case 2:
            cout << "Результат вычитания: " << a - b << endl;
            break;
        case 3:
            cout << "Результат умножения: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Результат деления: " << a / b << endl;
            else
                cout << "Ошибка: деление на ноль!" << endl;
            break;
        default:
            cout << "Ошибка: неверный выбор операции!" << endl;
            break;
        }

        cout << "Хотите запустить программу снова? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}