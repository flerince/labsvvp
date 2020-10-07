#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	printf("Дано значение x = 5 \n");
	x = 5;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("Значение функции y = 3*x^6 - 6*x^2 - 7 = %f \n", y);
}