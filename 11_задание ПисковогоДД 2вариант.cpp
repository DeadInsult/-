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
	cout << "[5] �������\n\n";
	cout << "[6] �������\n\n";
	cout << " �������� ������: ";
	int figure;
	cin >> figure;
	clear;


	while (figure == 6) {
		clear;
		cout << "\n[-] ������� ������: �������\n";


		cout << "�������� ������: ";
		int size;
		cin >> size;

		cout << "�������� ������: ";
		char symbol;
		cin >> symbol;

		cout << endl;





		for (int y = 0; y < height; y++) {
			for (int x = 0; x < height; x++){
				if (x == (size / 2 ) )

				    {

					cout << symbol;
				}
				else {
					cout << ".";
				}
			}
			cout << endl;
		}





		figure++;
		int _; cin >> _;
		return 0;


	}




}