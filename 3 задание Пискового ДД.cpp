#include <iostream>
#include <Windows.h>
#define clear system("cls");

using namespace std;


int main() {
	system("color E0");
	setlocale(0, "");

	cout << "������ �����������" << endl;
	cout << "������ �������������� ����������: \n[1] ��������\n[2] ��������� \n[3] ���������\n[4] �������\n" << endl;
	cout << "[+] �������� �������������� ��������: ";
	int operator1;
	cin >> operator1;
	cout << "[+] ������� ������ �����: ";
	float number1;
	cin >> number1;
	cout << "[+] ������� ������ �����: ";
	float number2;
	cin >> number2;

	if (operator1 == 1) {

		cout << "\n�����: " << number1 + number2;
		


	}

	else if (operator1 == 2) {

		cout << "\n�����: " << number1 - number2;
		



	}

	else if (operator1 == 3) {

		cout << "\n�����: " << number1 * number2;
		



	}

	else if (operator1 == 4) {

		cout << "\n�����: " << number1 / number2;
		

	   if  (number2 == 0)
	   {
		clear;
		   cout << ("�� �� ������ ������ �� ����!");
	     }



	}

	else {
		cout << "[-] ����� �������� �����������";
		



	}

	



	int _; cin >> _;
	return 0;
}