#include <iostream>
#define clear system ("cls");
using namespace std;

int main() {
	system("color E0");
	setlocale(0, "");

	cout << "[-] ������� ����: \n[1] ������\n[2] �������\n[3] ����\n[4] ������\n[5] ���\n[6] ����\n[7] ����\n[8] ������\n[9] ��������\n[10] �������\n[11] ������\n[12] �������\n" << endl << endl;
	cout << "�������� ���� �� ����� ����: ";
	int menu;
	cin >> menu;


	switch (menu) {

	case 1:
		clear;
		cout << "������ �����: ������";
		break;
		
	case 2:
		clear;
		cout << "������ �����: �������";
		break;
	case 3:
		clear;
		cout << "������ �����: ����";
		break;
	case 4:
		clear;
		cout << "������ �����: ������";
		break;
	case 5:
		clear;
		cout << "������ �����: ����";
		break;
	case 6:
		clear;
		cout << "������ �����: ���";
		break;
	case 7:
		clear;
		cout << "������ �����: ����";
		break;
	case 8:
		clear;
		cout << "������ �����: ����";
		break;
	case 9:
		clear;
		cout << "������ �����: ������";
		break;
	case 10:
		clear;
		cout << "������ �����: ��������";
		break;
	case 11:
		clear;
		cout << "������ �����: ������";
		break;
	case 12:
		clear;
		cout << "������ �����: �������";
		break;

	default:
		clear;
		cout << "�������� ��������";
		break;

	}


	int _; cin >> _;
}

