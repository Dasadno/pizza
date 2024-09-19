#include <iostream>

int main() {

	setlocale(LC_ALL, "ru");

	const int arr_lenght = 4;
	int list[arr_lenght];
	int i{};

	for (int i = 0; i < arr_lenght; i++)
	{
		std::cout << "¬ведите число в массив: ";
		std::cin >> list[i];
	}
	
	for(i = 0; i < arr_lenght; i++)
	{
		std::cout << "list[" << i + 1 << "] = " << list[i] << "\n ";
	}


	return 0;
}