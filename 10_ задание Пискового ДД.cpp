#include <iostream>
#define clear system("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] �������� ���������: '�������������� ������'\n\n";
	cout << "[1] �����\n\n";
	cout << "[2] �������\n\n";
	cout << "[3] �������������\n\n";
	cout << "[4] �����������\n\n";
	cout << " �������� ������: ";
	int figure;
	cin >> figure;
	clear;


	while (figure == 4) {
		clear;
		cout << "\n[-] ������� ������ �����������\n";
		cout << "\n�������� ���: \n[1] �����������\n[2] ������\n";
		figure++;
	}
	cout << "\n������� ��������: ";
	int type;
	cin >> type;

	while (type == 1) {


		cout << "�������� ������: ";
		int height;
		cin >> height;

		cout << "�������� ������: ";
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