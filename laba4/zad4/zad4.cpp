#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	printf("Введите два числа \n");
	scanf_s("%f%f", &a, &b);
	if (a != 0 && b != 0) {
		printf("Сумма квадратов чисел: %f \n", (a * a) + (b * b));
		printf("Разность квадратов чисел: %f \n", (a * a) - (b * b));
		printf("Произведение квадратов чисел: %f \n", (a * a) * (b * b));
		printf("Частное квадратов чисел: %f \n", (a * a) / (b * b));
	}
	else {
		printf("В одно или в оба числа введены нулевые значения");
	}
}