#include <iostream>
#define clear system("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] Название программы: 'Геометрические фигуры'\n\n";
	cout << "[1] Линия\n\n";
	cout << "[2] Квадрат\n\n";
	cout << " Выберите фигуру: ";
	int figure;
	cin >> figure;



	while (figure == 2) {
		clear;
		cout << "\n[-] Выбрана фигура Квадрат\n";
		cout << "\nВыберите тип: \n[1] Заполненный\n[2] Пустой\n";
		figure++;
	}
	   cout << "\nВведите значение: ";
	   int type2;
	   cin >> type2;

	while (type2 == 1) {


		cout << "Выберите размер: ";
		int size;
		cin >> size;

		cout << "Выберите символ: ";
		
		char symbol;
		cin >> symbol;

		cout << endl;



		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				cout << " " << symbol;
			}
			cout << endl;
		 }



		int _; cin >> _;
		return 0;
	
	
	}




}