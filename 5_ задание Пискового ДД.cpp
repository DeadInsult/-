#include <iostream>
#define clear system ("cls");
using namespace std;


int main() {
	system("color E0");
	setlocale(0, "");


	cout << "[-] ����������\n\n";
	cout << "[1] ������� �����\n";
	cout << "[2] ���������� �����\n\n\n";
	cout << "[3] �����\n\n\n\n";

	cout << "�������� ����, �� ��������������: ";
	int words;
	cin >> words;

	switch (words) {
		
	case 1:
		clear;

		cout << "���������� '������ ������� ����'\n\n";
		cout << "�������� ����������� �����:\n\n";
		cout << "[1]  ���\n";
		cout << "[2]  ���\n";
		cout << "[3]  ������\n";
		cout << "[4]  ����\n";
		cout << "[5]  ������\n";
		cout << "[6]  ����\n";
		cout << "[7]  ����\n";
		cout << "[8]  ����\n";
		cout << "[9]  �����\n";
		cout << "[10] �����\n\n\n";

		cout << "����� ������ �����:";
		int wordrus;
		cin >> wordrus;
		
		switch (wordrus) {

		case 1:
			clear;
			cout << "��� --> home";
			break;
		case 2:
			clear;
			cout << "��� --> cat";
			break;
		case 3:
			clear;
			cout << "������ --> dog";
			break;
		case 4:
			clear;
			cout << "���� --> elephant";
			break;
		case 5:
			clear;
			cout << "������ --> car";
			break;
		case 6:
			clear;
			cout << "���� --> horse";
			break;
		case 7:
			clear;
			cout << "���� --> leg";
			break;
		case 8:
			clear;
			cout << "���� --> hand";
			break;
		case 9:
			clear;
			cout << "���� --> mouse";
			break;
		case 10:
			clear;
			cout << "����� --> pipe";
			break;

		default:
			clear;
			cout << "������� �������� ��������";
			break;
         }
     }
	



		int _;  cin >> _;
}