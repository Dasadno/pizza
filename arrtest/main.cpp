#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main() {

	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 

	setlocale(LC_ALL, ".1251");

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


	cout << "Привет! \n";
	cout << "Это программа для вычесления того, насколько вам выгодно покупать ту, или иную пиццу. \n";
	cout << "-------------------------------------------------------------------------------------- \n";
	cout << "Введите название первой пиццы: ";
	cin >> name1;
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


	cout << "Введите название второй пиццы: ";
	cin >> name2;
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



	gr_price1 = weight1 / price1; 
	gr_price2 = weight2 / price2;

	
	if (gr_price1 < gr_price2)
	{
		value = gr_price1 * (price1 - price2);

		cout << "Купить пиццу " << name1 << " выгоднее! \n";
		cout << "Если бы вы покупали пиццу " << name2 << ", по цене грамма этой, то сэкономили: " << value << " руб";
	}
	else
	{
		value = gr_price2 * (price2 - price1);

		cout << "Купить пиццу " << name2 <<  " выгоднее! \n";
		cout << "Если бы вы купили пиццу " << name1 << ", по цене грамма этой, то сэкономили бы: " << value << " руб \n";
	}
	cout << "Цена за грамм пиццы " << name1 << ":" << gr_price1 << "\n Цена за грамм пиццы " << name2 << ":" << gr_price2;
	
	cout << endl;
	for (int i{ 0 }; i < 63; i++)
	{
		cout << "--";
		Sleep(50);
	}



	return 0;
}