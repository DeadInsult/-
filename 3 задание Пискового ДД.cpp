#include <iostream>
#include <Windows.h>
#define clear system("cls");

using namespace std;


int main() {
	system("color E0");
	setlocale(0, "");

	cout << "Крутой Калькулятор" << endl;
	cout << "Список арифметических операторов: \n[1] Сложение\n[2] Вычитание \n[3] Умножение\n[4] Деление\n" << endl;
	cout << "[+] Выберите арифметический оператор: ";
	int operator1;
	cin >> operator1;
	cout << "[+] Введите первое число: ";
	float number1;
	cin >> number1;
	cout << "[+] Введите второе число: ";
	float number2;
	cin >> number2;

	if (operator1 == 1) {

		cout << "\nОтвет: " << number1 + number2;
		


	}

	else if (operator1 == 2) {

		cout << "\nОтвет: " << number1 - number2;
		



	}

	else if (operator1 == 3) {

		cout << "\nОтвет: " << number1 * number2;
		



	}

	else if (operator1 == 4) {

		cout << "\nОтвет: " << number1 / number2;
		

	   if  (number2 == 0)
	   {
		clear;
		   cout << ("Вы не можете делить на ноль!");
	     }



	}

	else {
		cout << "[-] Такое действие отсутствует";
		



	}

	



	int _; cin >> _;
	return 0;
}