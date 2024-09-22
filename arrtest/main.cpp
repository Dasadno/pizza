#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "ru");


	const double p_num = 3.14159;

	float size1;
	float size2;

	float price1;
	float price2;

	float radius1;
	float radius2;

	int S_pizza1;
	int S_pizza2;

	float weight1;
	float weight2;

	float gr_price1;
	float gr_price2;

	int value;


	cout << "Привет! \n";
	cout << "Это программа для вычесления того, насколкько вам выгодно покупать ту, или иную пиццу. \n";
	cout << "-------------------------------------------------------------------------------------- \n";
	cout << "Введите размер 1й пиццы: ";
	cin >> size1;
	cout << "Введите граммовку пиццы: ";
	cin >> weight1;
	cout << "Введите стоимость пиццы: ";
	cin >> price1;
	cout << "Подождите, идет обработка данных. \n";
	for (int i{0}; i < 18; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;


	cout << "Введите размер 2й пиццы: ";
	cin >> size2;
	cout << "Введите граммовку пиццы: ";
	cin >> weight2;
	cout << "Введите стоимость пиццы: ";
	cin >> price2;
	cout << "Подождите, идет обработка данных \n";



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

	gr_price1 = weight1 / price1; 
	gr_price2 = weight2 / price2;

	
	if (S_pizza1 > S_pizza2 && gr_price1 > gr_price2)
	{
		value = gr_price1 * (price1 - price2);

		cout << "Купить первую пиццу выгоднее!";
		cout << "Если бы вы покупали вторую пиццу, по цене грамма этой, то вы бы потратили на: " << value << " руб меньше :)";
	}
	else
	{
		value = gr_price2 * (price2 - price1);

		cout << "Купить вторую пиццу выгоднее!";
		cout << "Если бы вы покупали первую пиццу по цене грамма этой, то вы бы потратили на: " << value << " руб меньше :)";
	}

	
	cout << endl;
	for (int i{ 0 }; i < 25; i++)
	{
		cout << "--";
		Sleep(50);
	}



	return 0;
}