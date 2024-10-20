#include <iostream>
#include <locale>
#include <Windows.h>
#include <memory>
#include <typeinfo>
#include <set>
#include <vector>
using namespace std;

/*

Динамические структуры 

Бинарное дерево — 
это структура данных, похожая на иерархию или 
"дерево", где каждый элемент (называемый узлом) 
может иметь не более двух "детей" — левого и правого.Важно, всегда упорядоченно!


Корень дерева — это самый первый узел, с которого всё начинается.
Узлы — это элементы дерева, которые могут содержать значения и ссылки на другие узлы.
Листья — это узлы, у которых нет детей, то есть это конечные узлы на ветвях дерева.

    [10]  ← Корень
    /  \
  [5]  [15]  ← Два ребенка корня
 /  \     \
[3] [7]   [20] ← Листья (узлы без детей)

логика добавления 


      [50]
     /    \
   [45]    [55]  если больше то вправо, если меньше то влево, и только два потомка
   /  \
 [1] [49] большее вправо!

с с++ это в мапе используется, или реализация ассоциативных массивов

*/

class MyBT {
    struct Node {
        int value;
        Node* left;
        Node* right;

        Node(int val) : value(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

public:
    MyBT() : root(nullptr) {}

    void add(int value) {
        root = addRecursive(root, value);
    }

    friend ostream& operator<<(ostream& os, const MyBT& tree) {
        tree.printInOrder(os, tree.root);
        return os;
    }

private:
    Node* addRecursive(Node* current, int value) {
        if (current == nullptr) {
            return new Node(value);  // Создаем новый узел, если текущий пуст
        }

        if (value < current->value) {
            current->left = addRecursive(current->left, value);  // Добавляем слева
        } else if (value > current->value) {
            current->right = addRecursive(current->right, value);  // Добавляем справа
        }

        return current;  // Возвращаем текущий узел
    }
};

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    MyBT tree;
    tree.add(10);
    tree.add(5);
    tree.add(15);
    tree.add(3);
    tree.add(7);

    cout << tree << endl;
    
    system("pause");
    return 0;
}