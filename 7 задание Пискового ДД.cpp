#include <iostream>
#define clear system("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] Название программы: 'Геометрические фигуры'\n\n";
	cout << "[1] Линия\n\n";
	cout << " Выберите фигуру: ";
	int figure;
	cin >> figure;



	while (figure == 1) {
		clear;
		cout << "\n[-] Выбрана фигура Линия\n";
		cout << "\nВыберите тип: \n[1] Горизонтальная\n[2] Вертикальная\n";
		figure++;




	}
	int menu2;
	cin >> menu2;

	while (menu2 == 1) {


		cout << "Выберите длину: ";
		int size;
		cin >> size;

		cout << "Выберите символ: ";
		char symbol;
		cin >> symbol;
		



		
			for (int x = 0; x < size; x++) {
				cout << symbol ;
			}


			int _; cin >> _;
	}
	



}