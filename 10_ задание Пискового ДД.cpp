#include <iostream>
#define clear system("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] Название программы: 'Геометрические фигуры'\n\n";
	cout << "[1] Линия\n\n";
	cout << "[2] Квадрат\n\n";
	cout << "[3] Прямоугольник\n\n";
	cout << "[4] Треугольник\n\n";
	cout << " Выберите фигуру: ";
	int figure;
	cin >> figure;
	clear;


	while (figure == 4) {
		clear;
		cout << "\n[-] Выбрана фигура Треугольник\n";
		cout << "\nВыберите тип: \n[1] Заполненный\n[2] Пустой\n";
		figure++;
	}
	cout << "\nВведите значение: ";
	int type;
	cin >> type;

	while (type == 1) {


		cout << "Выберите высоту: ";
		int height;
		cin >> height;

		cout << "Выберите символ: ";
		char symbol;
		cin >> symbol;

		cout << endl;





		for (float y = 0; y < height; y++) {
			for (float x = 0; x < height; x++) {

				if (x == (height / 2) + (y / 2) ||
					x == (height / 2) - (y / 2) ||
					y == height - 1 )
				
				{
					cout << symbol;
				}
				else {
					cout << ".";
				}
			}
			cout << endl;
		}




		int _; cin >> _;
		return 0;


	}




}