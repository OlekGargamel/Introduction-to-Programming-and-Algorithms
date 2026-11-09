// Лабораторная работа №5. Средний уровень. Вариант 7
// Функция: y = |x| - 5. Доп. задание: найти min, max, сумму и произведение

#include <iostream> 
#include <iomanip>
#include <cmath>
#include <limits> // Для numeric_limits

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	//Объявление переменных
	double a, b, h;

	//Ввод начала интервала
	cout << "Введите начало интервала: ";
	cin >> a;
	while (cin.fail()) {  //Цикл с проверкой на корректный ввод (0 допустим, разрывов нет)
		cout << "Ошибка ввода! ";  //Предупреждение об ошибке
		cin.clear(); //Сброс флага ошибки
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
		cin >> a;
	}

	//Ввод конца интервала
	cout << "Введите конец интервала: ";
	cin >> b;
	while (cin.fail() || b <= a) {  //Цикл с проверкой на корректный ввод
		cout << "Ошибка ввода! ";  //Предупреждение об ошибке
		cin.clear(); //Сброс флага ошибки
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
		cin >> b;
	}

	//Ввод шага
	cout << "Введите шаг: ";
	cin >> h;
	while (cin.fail() || h <= 0) {  //Цикл с проверкой на корректный ввод
		cout << "Ошибка ввода! ";  //Предупреждение об ошибке
		cin.clear(); //Сброс флага ошибки
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
		cin >> h;
	}

	//Демонстрация данной функции
	cout << "===============================================" << endl;
	cout << "	x	|	y = |x| - 5" << endl;
	cout << "===============================================" << endl;

	cout << fixed << setprecision(4);

	//Переменные для поиска min и max
	double minY, maxY;
	double xMin, xMax;
	bool firstPoint = true;

	//Переменные для суммы и произведения
	double sumY = 0.0;
	double proizv = 1.0;
	bool bylNol = false;

	//Цикл для вычисления
	for (double x = a; x <= b + 1e-9; x = x + h) {
		double y = abs(x) - 5;
		cout << setw(8) << x << "|" << setw(12) << y << endl;

		//Инициализация min и max первым значением функции
		if (firstPoint) {
			minY = y;
			maxY = y;
			xMin = x;
			xMax = x;
			firstPoint = false;
		}
		else {
			//Поиск наименьшего значения
			if (y < minY) {
				minY = y;
				xMin = x;
			}
			//Поиск наибольшего значения
			if (y > maxY) {
				maxY = y;
				xMax = x;
			}
		}

		//Накопление суммы
		sumY = sumY + y;

		//Накопление произведения с проверкой на ноль
		if (abs(y) < 1e-9) {
			bylNol = true;
		}
		proizv = proizv * y;
	}

	cout << "===============================================" << endl;

	//Вывод результатов
	cout << "Наименьшее значение: " << minY << endl;
	cout << "Наибольшее значение: " << maxY << endl;
	cout << "Сумма значений: " << sumY << endl;
	if (bylNol) {
		cout << "Произведение значений: " << 0.0 << " (т.к. был y = 0)" << endl;
	}
	else {
		cout << "Произведение значений: " << proizv << endl;
	}

	return 0; //Успешное завершение
}
