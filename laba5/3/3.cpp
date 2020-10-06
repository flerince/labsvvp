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
	printf("Введите координаты точки C так, чтобы она была между A и B (x3) \n");
	scanf_s("%f", &x3);
	if (x3 > x1 && x3 < x2) {
		AC = fabs(x3 - x1);
		BC = fabs(x3 - x2);
		printf("Длина отрезка AC = %f, BC = %f, их произведение = %f \n", AC, BC, AC * BC); // Выводим нужный ответ
	}
	else printf("Введенное значение точки C не находится между A и B");
}