#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, S, P;
	printf("Введите два числа \n");
	scanf_s("%f%f", &a, &b);
	S = a * b;
	P = (a + b) * 2;
	printf("Площадь: %f \n", S);
	printf("Периметр: %f \n", P);
}