#include <iostream>
using namespace std;
#define clear system("cls")

int main() {
	setlocale(0, "");
	system("color E0");


	cout << "[1] ����" << endl;
	cout << "[2] �����" << endl;
	cout << "[3] ����" << endl;
	cout << "[4] �����" << endl;
	cout << "[-] ������� ��������:";
	int menu;
	cin >> menu;
	if (menu == 1) {
		cout << "����� ����� �������, ������� ���������� � ��� ����� �����, � ����� �������� ��� ������ ����� �� ��� �� ������." << endl;
	}
	else if (menu == 2) {
		cout << "������ ����� �����, ��-�� ����� ����� � �����, �� ������������ � ������������ � ����, ��-�� ����� ��� �����" << endl;
	}
	else if (menu == 3) {
		cout << "����� ����� �����, ����� ����� ������� �������� �� ����� � ���� � � ����� " << endl;
	}
    else if (menu == 4) {
		cout << "�����- ������ ����������� �������� ������� �� ���������� ����" << endl;
	}

	else {
		cout << "�� ������� �� ������ ��������.. " << endl;
	}

	int _; cin >> _;
	return 0;
}