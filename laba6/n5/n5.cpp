#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float x, y,l;
	printf("Дано значение x = 4 \n");
	x = 4;
	x = x - 3; 
	y = 4 * pow(x, 6) - 7 * pow(x, 2) + 2;
	printf("При данном значении x значение функции y = 4*(x-3)^6-7*(x-3)^2+2 = %f \n", y);
}