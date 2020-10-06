#include <stdio.h>
#include <locale.h>
#include <math.h> 

main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	printf("Введите два числа \n");
	scanf_s("%f%f", &a, &b);
	if (a != 0 && b != 0) {
		printf("Сумма модулей чисел: %f \n", fabs(a) + fabs(b));
		printf("Разность модулей чисел: %f \n", fabs(a) - fabs(b));
		printf("Произведение модулей чисел: %f \n", fabs(a) * fabs(b));
		printf("Частное модулей чисел: %f \n", fabs(a) / fabs(b));
	}
	else {
		printf("В одно или в оба числа введены нулевые значения");
	}
}