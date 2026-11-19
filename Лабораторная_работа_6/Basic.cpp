// Лабораторная работа №6. Базовый уровень. Вариант 7
// Найти количество положительных элементов

#include <iostream> 
#include <cstdlib> // Для rand(), srand()
#include <ctime> // Для time()

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	//Объявление переменных
	const int SIZE = 9; // Размер массива
	int arr[SIZE]; // Массив

	// Инициализация генератора случайных чисел текущим временем 
	srand(static_cast<unsigned>(time(nullptr))); 

	// Заполнение случайными числами от -30 до 30
	for (int i = 0; i < SIZE; i++) {
		arr[i] = -30 + rand() % 61;
	}

	// Вывод массива
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Подсчет количества положительных элементов
	int pCount = 0; // Счетчик
	for (int i = 0; i < SIZE; i++) { // Цикл с проверкой
		if (arr[i] > 0) {
			pCount ++;
		}
	}

	// Вывод результата
	cout << "Количество положительных элементов равно " << pCount;
	
	return 0; // Успешное завершение
}
