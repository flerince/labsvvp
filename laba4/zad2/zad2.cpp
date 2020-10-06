#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float d;
	printf("Введите диаметр окружности \n");
	scanf_s("%f", &d);
	printf("Длина окружности: %f \n", d * 3.14);
}