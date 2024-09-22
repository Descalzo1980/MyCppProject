#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>
#include <list>
#include <vector>

using namespace std;

struct Node
{
  int value;
  Node *left = nullptr;
  Node *right = nullptr;
  Node() : value(0) {}
  explicit Node(int val) : value(val) {}
};

Node *findNode(Node *root, int value)
{
  if (root == nullptr)
  {
    return nullptr;
  }
  if (value < root->value)
  {
    return findNode(root->left, value);
  }
  else if (value > root->value)
  {
    return findNode(root->right, value);
  }
  return root;
};

int getCountList(Node *root)
{
  if (root == nullptr)
  {
    return 0;
  }
  /*   if (root->left == nullptr && root->right == nullptr)
    {
      return 1;
    } */
  if (root->left == nullptr && root->right == nullptr)
  {
    return root->value;
  }
  return getCountList(root->left) + getCountList(root->right);
}

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  Node *root = new Node(10);
  root->left = new Node(5);
  root->right = new Node(15);

  int valueToFind = 25;
  Node *foundNode = findNode(root, valueToFind);

  if (foundNode != nullptr)
  {
    std::cout << "Найден узел со значением: " << foundNode->value << std::endl;
  }
  else
  {
    std::cout << "Узел со значением " << valueToFind << " не найден" << std::endl;
  }

  std::cout << getCountList(root) << endl;

  void modifyWithPointer(int *ptr)
  {
    if (ptr != nullptr)
    {
      *ptr = 20; // Изменяем значение через указатель
    }
  }

  void modifyWithReference(int &ref)
  {
    ref = 30; // Изменяем значение через ссылку
  }
  /* Инициализация
Указатель может быть инициализирован как с указанием адреса объекта, так и как nullptr или даже быть неинициализированным 
(в этом случае он содержит неопределённое значение).

Ссылка обязана быть инициализирована сразу при объявлении, и после инициализации всегда ссылается на существующий объект. */
  int x = 10;
  int *ptr = &x; // Указатель может быть инициализирован адресом x
  int &ref = x;  // Ссылка обязана быть инициализирована объектом x сразу

  /* Изменяемость (переназначение)
  Указатель можно переназначить, то есть изменить, на какой объект он указывает.
  Ссылка не может быть переназначена. После инициализации ссылка всегда будет ссылаться на тот объект, с которым была связана. */
  int y = 20;
  ptr = &y; // Указатель может быть переназначен
  ref = y;  // Ссылка не переназначается на другой объект, а меняет значение x на 20

  /* Доступ к объекту
  Для указателя используется оператор разыменования *, чтобы получить доступ к объекту, на который он указывает.
  Для ссылки не нужно использовать никаких специальных операторов — она работает как алиас (другое имя) для объекта. */
  std::cout << *ptr; // Разыменование указателя
  std::cout << ref;  // Ссылка используется как обычная переменная

  /*
  Значение "пустого" указателя

  Указатель может принимать значение nullptr, означающее, что он не указывает ни на какой объект.
  Ссылка не может быть "пустой" или ссылаться на "ничто". Она всегда должна ссылаться на существующий объект.

  Работа с массивами

  Указатель может использоваться для работы с массивами, потому что массивы фактически представляют собой указатели на первый элемент массива.
  Ссылка не может использоваться как массив или работать с арифметикой указателей. */

  int arr[3] = {1, 2, 3};
  int *ptr = arr; // Указатель указывает на первый элемент массива

  /* Память и освобождение
Указатели могут указывать на динамически выделенную память, и важно освобождать её с помощью delete или delete[] для массивов.
Ссылки обычно ссылаются на объекты, управление памятью которых происходит автоматически (статическая или стековая память). */

  int *ptr = &x;
  modifyWithPointer(ptr);
  std::cout << "Значение x после изменения указателем: " << x << std::endl; // 20

  // Использование ссылки
  modifyWithReference(x);
  std::cout << "Значение x после изменения ссылкой: " << x << std::endl; // 30

  system("pause");
  return 0;
}