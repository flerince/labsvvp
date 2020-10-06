#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	printf("Введите два числа \n");
	scanf_s("%f%f", &a, &b);
	printf("Среднее арифметическое чисел: %f \n", (a + b) / 2);
}