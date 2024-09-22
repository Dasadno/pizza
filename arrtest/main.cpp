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

	cout << "Это программа для вычесления того, насколкько вам выгодно покупать ту, или иную пиццу. \n";
	cout << "-------------------------------------------------------------------------------------- \n";
	cout << "Введите размер 1й пиццы: ";
	cin >> size1;
	cout << "Введите граммовку пиццы: ";
	cin >> weight1;
	cout << "Введите стоимость пиццы: ";
	cin >> prise1;
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
	cin >> prise2;
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

	gr_price1 = weight1 / prise1;
	gr_price2 = weight2 / prise2;
	
	cube_price1 = S_pizza1 / prise1;
	cube_price2 = S_pizza2 / prise1; 
	if (S_pizza1 > S_pizza2) {
		cout << "Первая пицца больше чем вторая на " << S_pizza1 - S_pizza2 << " Квадратных сантиметров\n" ;
	}
	else {
		cout << "Вторая пицца больше чем первая на " << S_pizza2 - S_pizza1 << " Квадратных сантиметров\n";
	}
	if (S_pizza1 > S_pizza2 && gr_price1 > gr_price2)
	{
		cout << "При этом, цена за 1 квадратный сантиметр у первой пиццы меньше на " << (cube_price1-cube_price2) * -1 << ".";
		cout << "А цена за 1гр на " << gr_price1 - gr_price2 << ".";
	}
	else if (S_pizza1 > S_pizza2 && gr_price1 < gr_price2)
	{
		cout <<  "Но, цена за 1 квадратный сантиметр у второй пиццы меньше на " << (cube_price1 - cube_price2) * -1 << ".";
		cout << "А цена за 1гр на \n" << gr_price1 - gr_price2 << ".";
	}
	if (S_pizza2 > S_pizza1 && gr_price1 < gr_price2)
	{
		cout << "При этом, цена за 1 квадратный сантиметр у второй пиццы меньше на " << (cube_price1 - cube_price2) * -1 << ". \n";
		cout << "А цена за 1гр на " << gr_price1 - gr_price2 << ".";
	}
	else if (S_pizza1 > S_pizza2 && gr_price1 > gr_price2)
	{
		cout << "Но, цена за 1 квадратный сантиметр у первой пиццы меньше на " << (cube_price1 - cube_price2) * -1 << ". \n";
		cout << "А цена за 1гр на " << gr_price1 - gr_price2 << ".";
	}
	
	
	for (int i{ 0 }; i < 25; i++)
	{
		cout << "--";
		Sleep(50);
	}
	cout << endl;
	cout << "P.S. Если, к примеру цена за грамм более выгодная, а цена за квадратный сантиметр менее выгодная,\n то ваши данные введены нереалестично";


	return 0;
}