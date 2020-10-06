#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, X;
	printf("Введите координаты первой точки (x1,y1) через пробел \n");
	scanf_s("%f%f", &x1, &y1);
	printf("Введите координаты второй точки (x2,y2) через пробел \n");
	scanf_s("%f%f", &x2, &y2);
	X = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	printf("Расстояние между точками = %f \n", X); // Выводим нужный ответ
}