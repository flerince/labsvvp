#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, y3, x3, S, AB, BC, AC;
	printf("Введите координаты первой точки треугольника (x1,y1) через пробел \n");
	scanf_s("%f%f", &x1, &y1);
	printf("Введите координаты второй точки треугольника (x2,y2) через пробел \n");
	scanf_s("%f%f", &x2, &y2);
	printf("Введите координаты третьей точки треугольника (x3,y3) через пробел \n");
	scanf_s("%f%f", &x3, &y3);
	S = (fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1))) / 2;
	AC = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	BC = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	AB = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	printf("Площадь трегуольника = %f, Периметр = %f  \n", S, AB + AC + BC); // Выводим нужный ответ
}