#include <Iostream>
using namespace std;


int var1;
char var2;
float var3;
double var4;
bool var5;

void clear() {
	system("cls");
}

void setColor() {
	system("color E0");
}

void getSizeInt() {
	cout  << sizeof(var1) << endl;
}

void getSizeChar() {
	cout << sizeof(var2) << endl;
}

void getSizeFloat() {
	cout << sizeof(var3) << endl;
}

void getSizeDouble() {
	cout << sizeof(var4) << endl;
}

void getSizeBool() {
	cout << sizeof(var5) << endl << endl;
}

void cout228() {
	cout << "������, � �������!" << endl << endl << endl;
}
void cout1337() {
	cout << "# # # # #" << endl;
}
void cout1338() {
	cout << "# # # # #" << endl;
}
void cout1339() {
	cout << "# # # # #" << endl;
}
void cout1336() {
	cout << "# # # # #" << endl;
}
void cout1335() {
	cout << "# # # # #" << endl;
}




int main() {
	setlocale (0, "");
	

	cout << "������ ���!\n\n";
	setColor();

	cout << "������ int � ������ -\t";
	getSizeInt();
	cout << "������ char � ������ -\t";
	getSizeChar();
	cout << "������ float � ������ -\t";
	getSizeFloat();
	cout << "������ double � ������- ";
	getSizeDouble();
	cout << "������ bool � ������ -\t";
	getSizeBool();

	cout228();
	
	cout << "������� 10. �������." << endl << endl;

	cout1337();
	cout1338();
	cout1339();
	cout1336();
	cout1335();

	int _; cin >> _;
	return 0;
}