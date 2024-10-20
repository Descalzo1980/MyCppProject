#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
#include <stdexcept>
using namespace std;

/*

Стек 

LIFO!

стек это как магазин пистолета

*/
template <typename T>
class Stack {
private:
    T* arr;          // Динамический массив для хранения элементов
    int capacity;    // Вместимость стека
    int top;         // Индекс верхнего элемента стека

public:
    Stack(int size = 10); // Конструктор
    ~Stack();              // Деструктор

    void push(const T& item); // Добавление элемента
    void pop();               // Удаление элемента
    T peek() const;          // Получение верхнего элемента
    bool isEmpty() const;    // Проверка, пуст ли стек
    int size() const;        // Получение размера стека

    // Исключение для обработки ошибок
    class StackException : public std::runtime_error {
    public:
        StackException(const std::string& msg) : std::runtime_error(msg) {}
    };
};

template <typename T>
Stack<T>::Stack(int size) : capacity(size), top(-1) {
    arr = new T[capacity];
}

template <typename T>
Stack<T>::~Stack() {
    delete[] arr;
}

template <typename T>
void Stack<T>::push(const T& item) {
    if (top == capacity - 1) {
        throw StackException("Stack overflow");
    }
    arr[++top] = item;
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        throw StackException("Stack underflow");
    }
    top--;
}

template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        throw StackException("Stack is empty");
    }
    return arr[top];
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return top == -1;
}

template <typename T>
int Stack<T>::size() const {
    return top + 1;
}

// Пример использования стека  
int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

     Stack<int> stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element: " << stack.peek() << std::endl; // Вывод: 3
    std::cout << "Stack size: " << stack.size() << std::endl;  // Вывод: 3

    stack.pop();
    std::cout << "Top element after pop: " << stack.peek() << std::endl; // Вывод: 2
    
    system("pause");
    return 0;
}