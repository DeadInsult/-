#include <iostream>
using namespace std;
#define clear system("cls")

int main() {
	setlocale(0, "");
	system("color E0");


	cout << "[1] Зима" << endl;
	cout << "[2] Весна" << endl;
	cout << "[3] Лето" << endl;
	cout << "[4] Осень" << endl;
	cout << "[-] Введите значение:";
	int menu;
	cin >> menu;
	if (menu == 1) {
		cout << "Зимой очень холодно, медведи зарываются в ямы чтобы спать, а зайцы прячутся под елками чтобы на них не напали." << endl;
	}
	else if (menu == 2) {
		cout << "Весной очень мокро, из-за ухода снега с земли, он растворяется и превращается в воду, из-за этого так мокро" << endl;
	}
	else if (menu == 3) {
		cout << "Летом очень жарко, много людей выходят купаться на улицу в море и в озеро " << endl;
	}
    else if (menu == 4) {
		cout << "Осень- богата количеством выпавших листьев на квадратный метр" << endl;
	}

	else {
		cout << "Вы выбрали не верное значение.. " << endl;
	}

	int _; cin >> _;
	return 0;
}