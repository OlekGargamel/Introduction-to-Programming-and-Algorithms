// Лабораторная работа №6. Средний уровень. Вариант 7
// Найти индекс минимального и индекс максимального элемента

#include <iostream> 
#include <cstdlib> // Для rand(), srand()
#include <ctime> // Для time()

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	//Объявление переменных
	const int SIZE = 15; // Размер массива
	int arr[SIZE]; // Массив

	// Инициализация генератора случайных чисел текущим временем 
	srand(static_cast<unsigned>(time(nullptr)));

	// Заполнение случайными числами от -50 до 50
	for (int i = 0; i < SIZE; i++) {
		arr[i] = -50 + rand() % 101;
	}

	// Вывод массива
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Поиск индексов
	int minIndex = 0; // Индекс минимального
	int maxIndex = 0; // Индекс максимального
	int minVal = arr[0]; // Значение минимального
	int maxVal = arr[0]; // Значение максимального

	for (int i = 1; i < SIZE; i++) { // Цикл с поиском минимального и максимального значений
		if (arr[i] < minVal) {
			minVal = arr[i];
			minIndex = i;
		}
		if (arr[i] > maxVal) {
			maxVal = arr[i];
			maxIndex = i;
		}
	}

	// Вывод результата
	cout << "Индекс минимального значения: " << minIndex << endl;
	cout << "Индекс максимального значения: " << maxIndex << endl;
	
	return 0; // Успешное завершение
}
