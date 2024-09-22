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
	cout << "Это программа для вычесления какая пицца больше. \n";
	cout << "------------------------- \n";
	cout << "Введите радиус 1й пиццы: ";
	cin >> radius1;
	cout << "Подождите... \n";

	cout << "------------------------- \n";



	cout << "Введите радиус 2й пиццы: ";
	cin >> radius2;
	cout << "Подождите... \n";

	cout << "------------------------- \n";



	S_pizza1 = p_num * (radius1 * radius1);
	S_pizza2 = p_num * (radius2 * radius2);

	cout << "Площадь первой пиццы = " << S_pizza1 << "\n";
	cout << "Площадь второй пиццы = " << S_pizza2 << "\n";

	if (S_pizza1 > S_pizza2) {
		cout << "Первая пицца больше чем вторая";
	}
	else {
		cout << "Вторая пицца больше чем первая";
	}


	return 0;
}