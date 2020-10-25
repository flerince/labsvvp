#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float A, X, Y, price;
	printf("Введите значение X - кг конфет, A - их стоимость, Y - новое значение кг конфет \n");
	scanf_s("%f%f%f", &X, &A ,&Y);
	price = A / X;
	printf("Цена за 1 кг %5.2f, цена за Y кг - %5.2f \n", price, price*Y);

}