#include <iostream>
#define clear system("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] �������� ���������: '�������������� ������'\n\n";
	cout << "[1] �����\n\n";
	cout << "[2] �������\n\n";
	cout << " �������� ������: ";
	int figure;
	cin >> figure;



	while (figure == 2) {
		clear;
		cout << "\n[-] ������� ������ �������\n";
		cout << "\n�������� ���: \n[1] �����������\n[2] ������\n";
		figure++;
	}
	   cout << "\n������� ��������: ";
	   int type2;
	   cin >> type2;

	while (type2 == 1) {


		cout << "�������� ������: ";
		int size;
		cin >> size;

		cout << "�������� ������: ";
		
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