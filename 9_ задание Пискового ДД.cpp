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
	cout << " �������� ������: ";
	int figure;
	cin >> figure;



	while (figure == 3) {
		clear;
		cout << "\n[-] ������� ������ �������������\n";
		cout << "\n�������� ���: \n[1] �����������\n[2] ������\n";
		figure++;
	}
	cout << "\n������� ��������: ";
	int type2;
	cin >> type2;

	while (type2 == 2) {


		cout << "�������� ������: ";
		int width;
		cin >> width;

		cout << "�������� ������: ";
		int height;
		cin >> height;

		cout << "�������� ������: ";
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