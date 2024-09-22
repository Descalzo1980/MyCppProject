#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <codecvt>
#include <list>
#include <vector>

using namespace std;

template <typename K, typename V>
class HashTable
{
private:
  // Вектор списков для хранения пар ключ-значение
  std::vector<std::list<std::pair<K, V>>> table;
  int numBuckets; // Количество бакетов (ячейки в хеш-таблице)
  int size;       // Количество элементов в таблице

  // Хеш-функция
  int hashFunction(K key)
  {
    return std::hash<K>{}(key) % numBuckets;
  }

public:
  HashTable(int numBuckets) : numBuckets(numBuckets), size(0)
  {
    table.resize(numBuckets);
  }

  // Вставка пары ключ-значение
  void insert(K key, V value)
  {
    int bucketIndex = hashFunction(key);
    auto &chain = table[bucketIndex];

    // Проверяем, существует ли уже этот ключ, чтобы обновить значение
    for (auto &pair : chain)
    {
      if (pair.first == key)
      {
        pair.second = value; // обновление значения
        return;
      }
    }

    // Если ключа нет, добавляем новую пару
    chain.push_back({key, value});
    size++;
  }

  // Удаление элемента по ключу
  void remove(K key)
  {
    int bucketIndex = hashFunction(key);
    auto &chain = table[bucketIndex];

    // Ищем ключ в цепочке
    for (auto it = chain.begin(); it != chain.end(); ++it)
    {
      if (it->first == key)
      {
        chain.erase(it); // Удаление пары ключ-значение
        size--;
        return;
      }
    }
    std::cout << "Ключ не найден\n";
  }

  // Поиск элемента по ключу
  V *search(K key)
  {
    int bucketIndex = hashFunction(key);
    auto &chain = table[bucketIndex];

    // Поиск ключа в цепочке
    for (auto &pair : chain)
    {
      if (pair.first == key)
      {
        return &pair.second; // Возвращаем указатель на значение
      }
    }

    return nullptr; // Если ключ не найден
  }

  // Печать содержимого хеш-таблицы
  void printTable()
  {
    for (int i = 0; i < numBuckets; ++i)
    {
      std::cout << "Bucket " << i << ": ";
      for (auto &pair : table[i])
      {
        std::cout << "{" << pair.first << ": " << pair.second << "} ";
      }
      std::cout << std::endl;
    }
  }
};

int main()
{
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);
  setlocale(LC_ALL, "ru_RU.UTF-8");

  HashTable<int, std::string> hashTable(10);

  // Вставка элементов
  hashTable.insert(1, "Apple");
  hashTable.insert(2, "Banana");
  hashTable.insert(3, "Orange");
  hashTable.insert(4, "Grape");

  hashTable.printTable();

  // Поиск элемента
  auto result = hashTable.search(3);
  if (result != nullptr)
  {
    std::cout << "Найдено значение: " << *result << std::endl;
  }
  else
  {
    std::cout << "Ключ не найден" << std::endl;
  }

  // Удаление элемента
  hashTable.remove(2);
  hashTable.printTable();

  system("pause");
  return 0;
}