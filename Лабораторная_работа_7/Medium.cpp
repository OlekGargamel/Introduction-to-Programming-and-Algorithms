// Лабораторная работа №7. Средний уровень. Вариант 7
// Найти строку с максимальной суммой элементов

#include <iostream> 
#include <iomanip>
#include <cstdlib> // Для rand(), srand()
#include <ctime>   // Для time()

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	// Объявление переменных
	const int ROWS = 5; // Количество строк
	const int COLS = 4; // Количество столбцов
	int matrix[ROWS][COLS];

	// Инициализация генератора случайных чисел текущим временем 
	srand(static_cast<unsigned>(time(nullptr)));

	// Заполнение матрицы случайными числами от -30 до 30
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			matrix[i][j] = -30 + rand() % 61;
		}
	}

	// Демонстрация матрицы
	cout << "===============================================" << endl;
	cout << "Матрица " << ROWS << "x" << COLS << ":" << endl;
	cout << "===============================================" << endl;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << setw(6) << matrix[i][j];
		}
		cout << endl;
	}
	cout << "===============================================" << endl;

	// Поиск строки с максимальной суммой
	int maxSum = -999999; // Заведомо маленькое значение
	int maxRowIndex = 0;  // Индекс искомой строки

	cout << "Суммы по строкам:" << endl;
	for (int i = 0; i < ROWS; i++) {
		int rowSum = 0;
		for (int j = 0; j < COLS; j++) {
			rowSum += matrix[i][j];
		}
		cout << "Строка " << i << ": " << setw(5) << rowSum << endl;

		if (rowSum > maxSum) {
			maxSum = rowSum;
			maxRowIndex = i;
		}
	}
	cout << "===============================================" << endl;

	// Вывод результата
	cout << "Строка с максимальной суммой: " << maxRowIndex
		<< " (сумма = " << maxSum << ")" << endl;

	return 0; // Успешное завершение
}
