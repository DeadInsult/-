#include <iostream>
#define clear system ("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");

	cout << "[-] Времена года: \n[1] Январь\n[2] Февраль\n[3] Март\n[4] Апрель\n[5] Май\n[6] Июнь\n[7] Июль\n[8] Август\n[9] Сентябрь\n[10] Октябрь\n[11] Ноябрь\n[12] Декабрь\n" << endl << endl;
	cout << "Выберите одно из времён года: ";
	int menu;
	cin >> menu;


	switch (menu) {

	case 1:
		clear;
		cout << "Выбран месяц: январь";
		break;
		
	case 2:
		clear;
		cout << "Выбран месяц: февраль";
		break;
	case 3:
		clear;
		cout << "Выбран месяц: март";
		break;
	case 4:
		clear;
		cout << "Выбран месяц: апрель";
		break;
	case 5:
		clear;
		cout << "Выбран месяц: март";
		break;
	case 6:
		clear;
		cout << "Выбран месяц: май";
		break;
	case 7:
		clear;
		cout << "Выбран месяц: июнь";
		break;
	case 8:
		clear;
		cout << "Выбран месяц: июль";
		break;
	case 9:
		clear;
		cout << "Выбран месяц: август";
		break;
	case 10:
		clear;
		cout << "Выбран месяц: сентябрь";
		break;
	case 11:
		clear;
		cout << "Выбран месяц: ноябрь";
		break;
	case 12:
		clear;
		cout << "Выбран месяц: декабрь";
		break;

	default:
		clear;
		cout << "Неверное значения";
		break;

	}


	int _; cin >> _;
}

