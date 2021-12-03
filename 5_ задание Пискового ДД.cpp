#include <iostream>
#define clear system ("cls");
using namespace std;


int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] Переводчик\n\n";
	cout << "[1] Русские слова\n";
	cout << "[2] Английские слова\n\n\n";
	cout << "[3] Выйти\n\n\n\n";

	cout << "Выберите одно, из перечисленного: ";
	int words;
	cin >> words;

	switch (words) {
		
	case 1:
		clear;

		cout << "Переводчик 'Список русских слов'\n\n";
		cout << "Выберите необходимое слово:\n\n";
		cout << "[1]  Дом\n";
		cout << "[2]  Кот\n";
		cout << "[3]  Собака\n";
		cout << "[4]  Слон\n";
		cout << "[5]  Машина\n";
		cout << "[6]  Конь\n";
		cout << "[7]  Нога\n";
		cout << "[8]  Рука\n";
		cout << "[9]  Мышка\n";
		cout << "[10] Труба\n\n\n";

		cout << "Номер вашего слова:";
		int wordrus;
		cin >> wordrus;
		
		switch (wordrus) {

		case 1:
			clear;
			cout << "дом --> home";
			break;
		case 2:
			clear;
			cout << "кот --> cat";
			break;
		case 3:
			clear;
			cout << "собака --> dog";
			break;
		case 4:
			clear;
			cout << "слон --> elephant";
			break;
		case 5:
			clear;
			cout << "машина --> car";
			break;
		case 6:
			clear;
			cout << "конь --> horse";
			break;
		case 7:
			clear;
			cout << "нога --> leg";
			break;
		case 8:
			clear;
			cout << "рука --> hand";
			break;
		case 9:
			clear;
			cout << "мыша --> mouse";
			break;
		case 10:
			clear;
			cout << "труба --> pipe";
			break;

		default:
			clear;
			cout << "Введено неверное значение";
			break;
         }
     }
	



		int _;  cin >> _;
}