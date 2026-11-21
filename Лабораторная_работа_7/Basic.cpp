// Лабораторная работа №7. Базовый уровень. Вариант 7
// Найти количество нулевых элементов

#include <iostream> 
#include <iomanip>
#include <limits>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	//Объявление переменных
	const int N = 4;
	int matrix[N][N];

	// Инициализация генератора случайных чисел
	srand(static_cast<unsigned>(time(nullptr)));


	// Заполнение матрицы
	cout << "Введите элементы матрицы " << N << "x" << N << ":" << endl;
	for (int i = 0; i < N; i++) { // Цикл с заполнением строк
		for (int j = 0; j < N; j++) { // Цикл с заполнением столбцов
			cout << "matrix[" << i << "][" << j << "] = ";
			cin >> matrix[i][j];
			while (cin.fail()) { // Цикл с проверкой на корректный ввод
				cout << "Ошибка ввода! Введите целое число: ";
				cin.clear(); // Сброс флага ошибки
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Выбрасываем содержание из буфера
				cin >> matrix[i][j];
			}
		}
	}

	// Демонстрация введенной матрицы
	cout << "===============================================" << endl;
	cout << "Введенная матрица:" << endl;
	cout << "===============================================" << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(6) << matrix[i][j];
		}
		cout << endl;
	}
	cout << "===============================================" << endl;

	// Подсчет количества нулевых элементов
	int zeroCount = 0; // Счетчик
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == 0) {
				zeroCount++;
			}
		}
	}

	// Вывод результата
	cout << "Количество нулевых элементов равно " << zeroCount << endl;

	return 0; // Успешное завершение
}
