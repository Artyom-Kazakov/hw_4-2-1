#include <iostream>

enum class Months {
	jan = 1,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int month_input = 1;

	while (month_input != 0) {

		std::cout << "\nВведите номер месяца: ";
		std::cin >> month_input;

		while (month_input > 12 || month_input < 0) {
			std::cout << "Неверный номер месяца! Введите правильный номер месяца: ";
			std::cin >> month_input;
		}

		Months month = static_cast<Months>(month_input);

		switch (month) {

		case static_cast <Months>(1):
			std::cout << "Январь";
			break;
		case static_cast <Months>(2):
			std::cout << "Февраль";
			break;
		case static_cast <Months>(3):
			std::cout << "Март";
			break;
		case static_cast <Months>(4):
			std::cout << "Апрель";
			break;
		case static_cast <Months>(5):
			std::cout << "Май";
			break;
		case static_cast <Months>(6):
			std::cout << "Июнь";
			break;
		case static_cast <Months>(7):
			std::cout << "Июль";
			break;
		case static_cast <Months>(8):
			std::cout << "Август";
			break;
		case static_cast <Months>(9):
			std::cout << "Сентябрь";
			break;
		case static_cast <Months>(10):
			std::cout << "Октябрь";
			break;
		case static_cast <Months>(11):
			std::cout << "Ноябрь";
			break;
		case static_cast <Months>(12):
			std::cout << "Декабрь";
			break;
		}
	}
	std::cout << "До свидания!";
}
