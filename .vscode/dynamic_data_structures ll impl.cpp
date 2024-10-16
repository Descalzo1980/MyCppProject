#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
using namespace std;

/*

Динамические структуры:
односвязный список, реализация

*/
template <typename T>
class List
{
public:
    List();
    ~List();

    void push_back(T data);
    int getSize() { return Size; }

    T &operator[](const int index);

private:
    template <typename>
    class Node
    {
    public:
        Node *pNext;
        T data;
        Node(T data = T(), Node *pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node<T> *head;
};
template <typename T>
List<T>::List()
{
    Size = 0;
    head = nullptr;
}
template <typename T>
List<T>::~List()
{
}

template <typename T>
void List<T>::push_back(T data)
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T> *current = this->head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }
    Size++;
}

template <typename T>
T &List<T>::operator[](const int index)
{
    int counter = 0;
    Node<T> *current = this->head;
    while (current != nullptr)
    {
        if (counter == index)
        {
            return current->data;
        }
        current = current->pNext;
        counter++;
    }
}

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    List<int> lst;
/*     lst.push_back(5);
    lst.push_back(10);
    lst.push_back(22);

    cout << lst.getSize() << endl;
    cout << lst[2] << endl; */

    int numbersCount;
    cout << "Сколько чисел?" << endl;
    cin >> numbersCount;

    for (int i = 0; i < numbersCount; i++)
    {
        lst.push_back(rand() % 10);
    }

    for (int i = 0; i < lst.getSize(); i++)
    {
        cout << lst[i] << endl;
    }

    system("pause");
    return 0;
}