#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");
	
	const double p_num = 3.14159;
	float radius1;
	float radius2;
	float S_pizza1;
	float S_pizza2;
	cout << "��� ��������� ��� ���������� ����� ����� ������. \n";
	cout << "------------------------- \n";
	cout << "������� ������ 1� �����: ";
	cin >> radius1;
	cout << "���������... \n";

	cout << "------------------------- \n";



	cout << "������� ������ 2� �����: ";
	cin >> radius2;
	cout << "���������... \n";

	cout << "------------------------- \n";



	S_pizza1 = p_num * (radius1 * radius1);
	S_pizza2 = p_num * (radius2 * radius2);

	cout << "������� ������ ����� = " << S_pizza1 << "\n";
	cout << "������� ������ ����� = " << S_pizza2 << "\n";

	if (S_pizza1 > S_pizza2) {
		cout << "������ ����� ������ ��� ������";
	}
	else {
		cout << "������ ����� ������ ��� ������";
	}


	return 0;
}