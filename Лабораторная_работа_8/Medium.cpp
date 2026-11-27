// Лабораторная работа №8. Средний уровень
// Вывести строку, где каждый символ повторяется дважды
#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Объявление переменных
    string s;
    cout << "Введите строку: ";

    // Ввод строки
    getline(cin, s);

    // Создаем строку нужного размера (каждый символ удваивается)
    string result;
    result.resize(s.length() * 2);

    // Цикл с удваиванием символов
    for (int i = 0; i < s.length(); i++) {
        result[i * 2] = s[i];
        result[i * 2 + 1] = s[i];
    }

    // Вывод результата
    cout << "Результат: " << result << endl;

    return 0; // Успешное завершение
}
