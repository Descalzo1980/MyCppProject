#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    int a, b, selections;
    char repeat;

    do
    {
        cout << "Enter 2 numbers" << endl;
        cin >> a >> b;
        cout << "Choose a mathematical operation" << endl
             << "1. Addition" << endl
             << "2. Subtraction" << endl
             << "3. Multiplication" << endl
             << "4. Division" << endl;

        cin >> selections;

        switch (selections)
        {
        case 1:
            cout << "Result of addition: " << a + b << endl;
            break;
        case 2:
            cout << "Result of subtraction: " << a - b << endl;
            break;
        case 3:
            cout << "Result of multiplication: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result of division: " << (float) a / b << endl;
            else
                cout << "Error: division by zero!" << endl;
            break;
        default:
            cout << "Error: invalid operation selection!" << endl;
            break;
        }

        cout << "Do you want to run the program again? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
    system("pause");
}