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
    void pop_front();
    void clear();

    void push_front(T data);
    void pop_back();
    void insert(T data, int index);
    void removeAt(int index);

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
void List<T>::pop_front()
{
    Node<T> *temp = head;
    head = head->pNext;
    delete temp;
    Size--;
}

template <typename T>
void List<T>::clear()
{
    while (Size)
    {
        pop_front();
    }
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

template <typename T>
void List<T>::push_front(T data)
{
    head = new Node<T>(data, head);
    Size++;
}

template <typename T>
void List<T>::insert(T data, int index)
{
    if (index == 0)
    {
        push_front(data);
    }
    else
    {
        Node<T> *previous = this->head;

        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }

        previous->pNext = new Node<T>(data, previous->pNext);

        Size++;
    }
}

template <typename T>
void List<T>::removeAt(int index)
{
    if (index == 0)
    {
        pop_front();
    }
    else
    {
        Node<T> *previous = this->head;

        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }

        Node<T> *toDelete = previous->pNext;

        previous->pNext = toDelete->pNext;
        delete toDelete;
        Size--;
    }
}

template <typename T>
void List<T>::pop_back()
{
    removeAt(Size - 1);
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
    /*     lst.push_back(44);
        lst.push_back(55);
        lst.push_back(66);
        lst.push_back(77);
        lst.push_back(88);
        lst.push_back(99); */

    /*     for (int i = 0; i < numbersCount; i++)
        {
            lst.push_back(rand() % 10);
        }

        for (int i = 0; i < lst.getSize(); i++)
        {
            cout << lst[i] << endl;
        } */

    /*     cout << endl
             << "Элементов в списке " << endl
             << lst.getSize() << " выполняю pop_front" << endl;

        lst.pop_front();

        for (int i = 0; i < lst.getSize(); i++)
        {
            cout << lst[i] << endl;
        } */

    /*     cout << endl
             << "Элементов в списке" << endl
             << lst.getSize() << endl;

        cout << endl
             << "Элементов в списке " << endl
             << lst.getSize() << " выполняю clear" << endl;

        lst.clear();

        cout << endl
             << "Элементов в списке" << endl
             << lst.getSize() << endl; */

    lst.push_front(777);
    lst.push_front(888);
    lst.push_front(999);
    lst.push_front(1000);

    for (int i = 0; i < lst.getSize(); i++)
    {
        cout << lst[i] << endl;
    }

    /*     cout << endl
             << "insert" << endl;

        lst.insert(99, 1);

        for (int i = 0; i < lst.getSize(); i++)
        {
            cout << lst[i] << endl;
        } */
    cout << endl
         << "removeAt" << endl;
    lst.removeAt(1);

    for (int i = 0; i < lst.getSize(); i++)
    {
        cout << lst[i] << endl;
    }

    cout << endl
         << "pop_back" << endl;

    lst.pop_back();

    for (int i = 0; i < lst.getSize(); i++)
    {
        cout << lst[i] << endl;
    }

    system("pause");
    return 0;
}