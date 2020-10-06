#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, x3, AC, BC;
	printf("Введите координаты точки А (x1) \n");
	scanf_s("%f", &x1);
	printf("Введите координаты точки B (x2) \n");
	scanf_s("%f", &x2);
	printf("Введите координаты точки C (x3) \n");
	scanf_s("%f", &x3);
	AC = fabs(x3 - x1);
	BC = fabs(x3 - x2);
	printf("Длина отрезка AC = %f, BC = %f, их сумма = %f \n", AC, BC, AC + BC); // Выводим нужный ответ
}