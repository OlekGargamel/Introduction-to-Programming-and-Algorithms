// Лабораторная работа №8. Повышенный уровень
// Распаковка строки (обратная операция)
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Объявление переменных
    string s;
    bool check = false;
    int lenS;

    while (check == false) {
        // Ввод строки
        cout << "Введите строку вида: буква/цифра/буква/цифра..." << endl;
        getline(cin, s);
        
        // Проверка ввода
        check = true;
        lenS = s.length();
        if (lenS % 2 == 1) {
            check = false;
        }
        else {
            for (int i = 0;i < lenS / 2;i++) { // Проверка на букву
                if (!(isalpha(s[i * 2]))) {
                    check = false;
                }
                if (!(isdigit(s[i * 2 + 1]))) { // Проверка на число
                    check = false;
                }
            }
        }
    }

    // Распаковка строки
    string result = "";
    int point = 0;
    string word;
    for (int i = 0; i < lenS / 2; i++){
        word = s[i*2];
        point = s[i*2+1] - '0';
        for (int j = 0; j < point;j++) {
            result += word;
        }
    }
    
    // Вывод результата
    cout << "=========================================================" << endl;
    cout << "Результат распаковки: " << result;
}
