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
	cout << " Выберите фигуру: ";
	int figure;
	cin >> figure;



	while (figure == 3) {
		clear;
		cout << "\n[-] Выбрана фигура Прямоугольник\n";
		cout << "\nВыберите тип: \n[1] Заполненный\n[2] Пустой\n";
		figure++;
	}
	cout << "\nВведите значение: ";
	int type2;
	cin >> type2;

	while (type2 == 2) {


		cout << "Выберите ширину: ";
		int width;
		cin >> width;

		cout << "Выберите высоту: ";
		int height;
		cin >> height;

		cout << "Выберите символ: ";
        char symbol;
		cin >> symbol;

		cout << endl;



		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {

				if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
					cout <<  symbol;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}




		int _; cin >> _;
		return 0;


	}




}