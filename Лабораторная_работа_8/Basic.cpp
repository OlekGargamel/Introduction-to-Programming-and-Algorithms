// Лабораторная работа №8. Базовый уровень. Вариант 7
// Вывести строку и подсчитать количество пробелов
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    // Объявление переменных
    string s;
    int spaceCount = 0;
    cout << "Введите строку: ";

    getline(cin, s); // Ввод строки
    int lenS = s.length(); // Длина строки
    
    // Подсчет пробелов
    for (int i = 0; i < lenS; i++) {
        if (s[i] == ' ') {
            spaceCount++;
        }
        
    }
    
    // Вывод результата
    cout << "==================================" << endl;
    cout << "Строка: " << s << endl;
    cout << "Количество пробелов: " << spaceCount << endl;

    return 0; // Успешное завершение
}
