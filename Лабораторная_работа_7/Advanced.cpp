// Лабораторная работа №7. Повышенный уровень. Вариант 7
// Зеркальное отражение относительно вертикальной оси(обменять столбцы)

#include <iostream> 
#include <iomanip>
#include <cstdlib> // Для rand(), srand()
#include <ctime>   // Для time()

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	// Объявление переменных
	const int N = 5; // Размер матрицы 5x5
	int matrix[N][N];

	// Инициализация генератора случайных чисел текущим временем 
	srand(static_cast<unsigned>(time(nullptr)));

	// Заполнение матрицы случайными числами от 1 до 100
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = 1 + rand() % 100;
		}
	}

	// Демонстрация исходной матрицы
	cout << "===============================================" << endl;
	cout << "Исходная матрица " << N << "x" << N << ":" << endl;
	cout << "===============================================" << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(6) << matrix[i][j];
		}
		cout << endl;
	}
	cout << "===============================================" << endl;

	// Цикл с заменой
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N / 2; j++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i][N - 1 - j];
			matrix[i][N - 1 - j] = temp;
		}
	}

	// Демонстрация результата
	cout << "Матрица после отражения по вертикали:" << endl;
	cout << "===============================================" << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(6) << matrix[i][j];
		}
		cout << endl;
	}
	cout << "===============================================" << endl;

	return 0; // Успешное завершение
}
