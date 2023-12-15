/*1)Чтобы изменить длину вектора, используются такие
функции, как resize, push_back и pop_back.Функция resize может либо уменьшить,
либо увеличить размер вектора(в качестве аргумента принимается размер вектора).
Функция push_back добавляет новый элемент в конец вектора. Функция pop_back 
удаляет последний элемент из вектора.
2.1)Capacity - это максимальный размер вектора, а size - количество элементов в нем. Например,
кол-во элементов равно 7, а capacity равно 9, это означает, что в вектор мы еще можем вместить
2 значения. При увеличении size, capacity автоматически увеличивает свое значение с запасом,
т.е. не на елиницу, а, например, сразу на 3.
2.2)Функция shrink_to_fit уменьшает размер вектора до минимально необходимого, удаляя неиспользуемые
элементы(иными словами, capacity становится равным size).
2.3)Функция resize может либо уменьшить, либо увеличить размер вектора(в качестве аргумента принимается 
размер вектора).
2.4)Функция reserve увеличивает кол-во допустимых элементов(т.е. увеличивается capacity).
3)Знаки < и > обозначают тип данных для чисел, которые будут храниться в векторе. Например,
std::vector<int> - вектор с целыми числами.
5.1)Функция at возвращает ссылку на элемент вектора по его индексу, и проверяет,  находится ли индекс
в допустимом диапазоне. Если индекс выходит за пределы , то выдаётся ошибка  std::out_of_range.
5.2)Функция [] также возвращает ссылку на элемент по индексу, но если индекс выходит за пределы вектора,
то она просто возвращает пустой элемент.([] быстрее, чем at() из-за лишней проверки)
5.3)Так можно более безопасно работать с векторами. Если случайно используется неправильный индекс для функции [],
то ошибку можно не заметить. А если используется at, то ошибка будет обнаружена раньше.*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    vector<int> numbers;
    cout << "Введите число(0 для остановки):" << endl;

    int input;
    //пункт 1
    do {
        cin >> input;
        numbers.push_back(input);
    } while (input != 0);

    cout << "Вектор состоит из " << numbers.size() << " элементов" << endl;
    //пункт 2
    numbers.erase(numbers.begin() + 2); // Удаляет третий элемент (константа в виде аргумента)
    std::cout << "После использования erase:" << std::endl;
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << "" << std::endl;
    //пункт 3
    numbers.insert(numbers.begin(), 4); // Вставляет число 4 в начало вектора (константа в виде аргумента)
    std::cout << "После использования insert:" << std::endl;
    for (const auto& number : numbers)
        std::cout << number << ' ';
    std::cout << "" << std::endl;
    numbers.clear();
    std::cout << "После использования clear:" << std::endl;
    std::cout << "size:" << numbers.size() << " capacity:" << numbers.capacity();
}