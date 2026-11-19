// Лабораторная работа №6. Повышенный уровень. Вариант 7
// Сортировка выбором(по убыванию) - вывести массив до и после

#include <iostream> 
#include <cstdlib> // Для rand(), srand()
#include <ctime> // Для time()

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	//Объявление переменных
	const int SIZE = 20; // Размер массива
	int arr[SIZE]; // Массив

	// Инициализация генератора случайных чисел текущим временем 
	srand(static_cast<unsigned>(time(nullptr)));

	// Заполнение случайными числами от -50 до 50
	for (int i = 0; i < SIZE; i++) {
		arr[i] = -50 + rand() % 101;
	}

	// Вывод массива до
	cout << "========================================" << endl;
	cout << "До" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "========================================" << endl;
	
	// Сортировка по убыванию
	// Ищем максимальный элемент в неотсортированной части и ставим его в начало
	for (int i = 0; i < SIZE - 1; i++) {
		int maxIndex = i; // Предполагаем, что текущий элемент максимальный

		// Ищем реальный максимум в оставшейся части массива
		for (int j = i + 1; j < SIZE; j++) {
			if (arr[j] > arr[maxIndex]) { // Знак > для сортировки по убыванию
				maxIndex = j;
			}
		}

		// Если нашли элемент больше, меняем местами
		if (maxIndex != i) {
			int temp = arr[i];
			arr[i] = arr[maxIndex];
			arr[maxIndex] = temp;
		}
	}

	// Вывод массива после
	cout << endl << "========================================" << endl;
	cout << "После" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "========================================" << endl;

	return 0; // Успешное завершение
}
