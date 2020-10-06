#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, A, B;
	printf("Введите координаты первой вершины прямоугольника (x1,y1) через пробел \n");
	scanf_s("%f%f", &x1, &y1);
	printf("Введите координаты противоположной вершины прямоугольника (x2,y2) через пробел \n");
	scanf_s("%f%f", &x2, &y2);
	A = fabs(y2 - y1);
	B = fabs(x2 - x1);
	printf("Площадь прямоугольника = %f, Периметр = %f  \n", A * B, A * 2 + B * 2); // Выводим нужный ответ
}
