#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");


	const double p_num = 3.14159;
	float size1;
	float size2;
	float prise1;
	float prise2;
	float radius1;
	float radius2;
	float S_pizza1;
	float S_pizza2;
	float weight1;
	float weight2;
	float gr_price1;
	float gr_price2;
	float cube_price1;
	float cube_price2;

	cout << "��� ��������� ��� ���������� ����, ���������� ��� ������� �������� ��, ��� ���� �����. \n";
	cout << "-------------------------------------------------------------------------------------- \n";
	cout << "������� ������ 1� �����: ";
	cin >> size1;
	cout << "������� ��������� �����: ";
	cin >> weight1;
	cout << "������� ��������� �����: ";
	cin >> prise1;
	cout << "���������, ���� ��������� ������. \n";
	for (int i{0}; i < 18; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;


	cout << "������� ������ 2� �����: ";
	cin >> size2;
	cout << "������� ��������� �����: ";
	cin >> weight2;
	cout << "������� ��������� �����: ";
	cin >> prise2;
	cout << "���������, ���� ��������� ������ \n";

	for (int i{0}; i < 18; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;

	radius1 = size1 / 2;
	radius2 = size2 / 2;
	S_pizza1 = p_num * (radius1 * radius1);
	S_pizza2 = p_num * (radius2 * radius2);

	gr_price1 = weight1 / prise1;
	gr_price2 = weight2 / prise2;
	
	cube_price1 = S_pizza1 / prise1;
	cube_price2 = S_pizza2 / prise1; 
	if (S_pizza1 > S_pizza2) {
		cout << "������ ����� ������ ��� ������ �� " << S_pizza1 - S_pizza2 << " ���������� �����������\n" ;
	}
	else {
		cout << "������ ����� ������ ��� ������ �� " << S_pizza2 - S_pizza1 << " ���������� �����������\n";
	}
	if (S_pizza1 > S_pizza2 && gr_price1 > gr_price2)
	{
		cout << "��� ����, ���� �� 1 ���������� ��������� � ������ ����� ������ �� " << (cube_price1-cube_price2) * -1 << ".";
		cout << "� ���� �� 1�� �� " << gr_price1 - gr_price2 << ".";
	}
	else if (S_pizza1 > S_pizza2 && gr_price1 < gr_price2)
	{
		cout <<  "��, ���� �� 1 ���������� ��������� � ������ ����� ������ �� " << (cube_price1 - cube_price2) * -1 << ".";
		cout << "� ���� �� 1�� �� \n" << gr_price1 - gr_price2 << ".";
	}
	if (S_pizza2 > S_pizza1 && gr_price1 < gr_price2)
	{
		cout << "��� ����, ���� �� 1 ���������� ��������� � ������ ����� ������ �� " << (cube_price1 - cube_price2) * -1 << ". \n";
		cout << "� ���� �� 1�� �� " << gr_price1 - gr_price2 << ".";
	}
	else if (S_pizza1 > S_pizza2 && gr_price1 > gr_price2)
	{
		cout << "��, ���� �� 1 ���������� ��������� � ������ ����� ������ �� " << (cube_price1 - cube_price2) * -1 << ". \n";
		cout << "� ���� �� 1�� �� " << gr_price1 - gr_price2 << ".";
	}
	
	
	for (int i{ 0 }; i < 25; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;
	cout << "P.S. ����, � ������� ���� �� ����� ����� ��������, � ���� �� ���������� ��������� ����� ��������,\n �� ���� ������ ������� �������������";


	return 0;
}