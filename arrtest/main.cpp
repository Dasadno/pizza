#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");


	const double p_num = 3.14159;

	string name1;
	string name2;

	float price1;
	float price2;

	float radius1;
	float radius2;


	float weight1;
	float weight2;

	float gr_price1;
	float gr_price2;

	int value;


	cout << "������! \n";
	cout << "��� ��������� ��� ���������� ����, ��������� ��� ������� �������� ��, ��� ���� �����. \n";
	cout << "-------------------------------------------------------------------------------------- \n";
	cout << "������� �������� ������ �����: ";
	cin >> name1;
	cout << "������� ��������� �����: ";
	cin >> weight1;
	cout << "������� ��������� �����: ";
	cin >> price1;
	cout << "���������, ���� ��������� ������. \n";
	for (int i{0}; i < 18; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;


	cout << "������� �������� ������ �����: ";
	cin >> name2;
	cout << "������� ��������� �����: ";
	cin >> weight2;
	cout << "������� ��������� �����: ";
	cin >> price2;
	cout << "���������, ���� ��������� ������ \n";



	for (int i{0}; i < 18; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;



	gr_price1 = weight1 / price1; 
	gr_price2 = weight2 / price2;

	
	if (gr_price1 < gr_price2)
	{
		value = gr_price1 * (price1 - price2);

		cout << "������ ����� " << name1 << " ��������!";
		cout << "���� �� �� �������� ������ �����, �� ���� ������ ����, �� �� �� ��������� ��: " << value << " ��� ������ :)";
	}
	else
	{
		value = gr_price2 * (price2 - price1);

		cout << "������ �����" << name2 <<  " ��������! \n";
		cout << "���� �� �� ������ �����" << name1 << "�� ���� ������ ����, \n�� ���������� �� : " << value << " ��� )\n";
		cout << "���� �� ����� ������ ����� " << gr_price1 << "\n ���� �� ����� ������ ����� " << gr_price2;
	}

	
	cout << endl;
	for (int i{ 0 }; i < 63; i++)
	{
		cout << "--";
		Sleep(50);
	}



	return 0;
}