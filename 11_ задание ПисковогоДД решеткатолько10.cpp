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
	cout << "[5] Решетка\n\n";
	cout << " Выберите фигуру: ";
	int figure;
	cin >> figure;
	clear;


	while (figure == 5) {
		clear;
		cout << "\n[-] Выбрана фигура: Решетка\n";
	
	
        cout << "Выберите высоту: ";
		int height;
		cin >> height;

		cout << "Выберите символ: ";
		char symbol;
		cin >> symbol;

		cout << endl;





		for (int y = 0; y < height; y++) {
			for (int x = 0; x < height; x++) {
				if ( x == height )

			    {

			        cout << symbol;
				}
                else {
					cout << ".";
				}
			}
			cout << endl;
		}





		figure++;
		int _; cin >> _;
		return 0;


	}




}