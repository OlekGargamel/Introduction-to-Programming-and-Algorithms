// Лабораторная работа №4. Повышенный уровень. Вариант 7
// Программа-калькулятор дат: ввести день и месяц, вывести: знак зодиака, время года, количество дней до конца года

#include <iostream> // Подключение библиотеки ввода-вывода
#include <limits> //Подключение библиотеки для лимитов

using namespace std;

int main() {
	setlocale(LC_ALL, "RU"); // Функция для отображения кириллицы

	//Объявление переменных
	int month = 0;
	int day = 0;
	int remainingDays = 0;

	//Ввод месяца
	cout << "Введите номер месяца: ";
	cin >> month;
	while (cin.fail() || month <= 0 || month >= 13) {  //Цикл с проверкой на корректный ввод
		cout << "Ошибка ввода! Введите номер месяца: ";  //Предупреждение об ошибке
		cin.clear(); //Сброс флага ошибки
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
		cin >> month;
	}

	//Условие проверки месяца
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		//Ввод дня
		cout << "Введите день: ";
		cin >> day;
		while (cin.fail() || not(day >= 1 && day <= 31)) {  //Цикл с проверкой на корректный ввод
			cout << "Ошибка ввода! Введите день: ";  //Предупреждение об ошибке
			cin.clear(); //Сброс флага ошибки
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
			cin >> day;
		}
	}
	else if (month == 2) {
		//Ввод дня
		cout << "Введите день: ";
		cin >> day;
		while (cin.fail() || not(day >= 1 && day <= 29)) {  //Цикл с проверкой на корректный ввод
			cout << "Ошибка ввода! Введите день: ";  //Предупреждение об ошибке
			cin.clear(); //Сброс флага ошибки
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
			cin >> day;
		}
	}
	else {
		//Ввод дня
		cout << "Введите день: ";
		cin >> day;
		while (cin.fail() || not(day >= 1 && day <= 30)) {  //Цикл с проверкой на корректный ввод
			cout << "Ошибка ввода! Введите день: ";  //Предупреждение об ошибке
			cin.clear(); //Сброс флага ошибки
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Выбрасываем содержание из буфера
			cin >> day;
		}
	}
	
	//Switch для вывода знака зодиака и времени года
	switch (month) {
		case 1:
			if (day <= 20) {
				cout << "Ваш знак зодиака - Козерог";
			}
			else {
				cout << "Ваш знак зодиака - Водолей";
			}
			cout << endl;
			cout << "Ваше время года - Зима";
			cout << endl;
			break;
		case 2:
			if (day <= 20) {
				cout << "Ваш знак зодиака - Водолей";
			}
			else {
				cout << "Ваш знак зодиака - Рыбы";
			}
			cout << endl;
			cout << "Ваше время года - Зима";
			cout << endl;
			break;
		case 3:
			if (day <= 20) {
				cout << "Ваш знак зодиака - Рыбы";
			}
			else {
				cout << "Ваш знак зодиака - Овен";
			}
			cout << endl;
			cout << "Ваше время года - Весна";
			cout << endl;
			break;
		case 4:
			if (day <= 20) {
				cout << "Ваш знак зодиака - Овен";
			}
			else {
				cout << "Ваш знак зодиака - Телец";
			}
			cout << endl;
			cout << "Ваше время года - Весна";
			cout << endl;
			break;
		case 5:
			if (day <= 20) {
				cout << "Ваш знак зодиака - Телец";
			}
			else {
				cout << "Ваш знак зодиака - Близнецы";
			}
			cout << endl;
			cout << "Ваше время года - Весна";
			cout << endl;
			break;
		case 6:
			if (day <= 21) {
				cout << "Ваш знак зодиака - Близнецы";
			}
			else {
				cout << "Ваш знак зодиака - Рак";
			}
			cout << endl;
			cout << "Ваше время года - Лето";
			cout << endl;
			break;
		case 7:
			if (day <= 22) {
				cout << "Ваш знак зодиака - Рак";
			}
			else {
				cout << "Ваш знак зодиака - Лев";
			}
			cout << endl;
			cout << "Ваше время года - Лето";
			cout << endl;
			break;
		case 8:
			if (day <= 23) {
				cout << "Ваш знак зодиака - Лев";
			}
			else {
				cout << "Ваш знак зодиака - Дева";
			}
			cout << endl;
			cout << "Ваше время года - Лето";
			cout << endl;
			break;
		case 9:
			if (day <= 23) {
				cout << "Ваш знак зодиака - Дева";
			}
			else {
				cout << "Ваш знак зодиака - Весы";
			}
			cout << endl;
			cout << "Ваше время года - Осень";
			cout << endl;
			break;
		case 10:
			if (day <= 23) {
				cout << "Ваш знак зодиака - Весы";
			}
			else {
				cout << "Ваш знак зодиака - Скорпион";
			}
			cout << endl;
			cout << "Ваше время года - Осень";
			cout << endl;
			break;
		case 11:
			if (day <= 22) {
				cout << "Ваш знак зодиака - Скорпион";
			}
			else {
				cout << "Ваш знак зодиака - Стрелец";
			}
			cout << endl;
			cout << "Ваше время года - Осень";
			cout << endl;
			break;
		case 12:
			if (day <= 21) {
				cout << "Ваш знак зодиака - Стрелец";
			}
			else {
				cout << "Ваш знак зодиака - Козерог";
			}
			cout << endl;
			cout << "Ваше время года - Зима";
			cout << endl;
			break;
	}

	//Switch для посчёта оставшихся дней до конца года
	switch (month) {
		case 1:
			remainingDays = 366 - day;
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 2:
			remainingDays = 366 - (31 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 3:
			remainingDays = 366 - (31 + 29 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 4:
			remainingDays = 366 - (31 + 29 + 31 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 5:
			remainingDays = 366 - (31 + 29 + 31 + 30 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 6:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 7:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + 30 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 8:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + 30 + 31 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 9:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 10:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 11:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
		case 12:
			remainingDays = 366 - (31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day);
			cout << "Количество оставшихся дней до конца года - " << remainingDays;
			break;
	}
	

	return 0; // Успешное завершение
}
