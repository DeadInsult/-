#include <iostream>
#define clear system("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] �������� ���������: '�������������� ������'\n\n";
	cout << "[1] �����\n\n";
	cout << " �������� ������: ";
	int figure;
	cin >> figure;



	while (figure == 1) {
		clear;
		cout << "\n[-] ������� ������ �����\n";
		cout << "\n�������� ���: \n[1] ��������������\n[2] ������������\n";
		figure++;




	}
	int menu2;
	cin >> menu2;

	while (menu2 == 1) {


		cout << "�������� �����: ";
		int size;
		cin >> size;

		cout << "�������� ������: ";
		char symbol;
		cin >> symbol;
		



		
			for (int x = 0; x < size; x++) {
				cout << symbol ;
			}


			int _; cin >> _;
	}
	



}