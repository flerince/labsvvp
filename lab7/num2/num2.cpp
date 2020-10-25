#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float a, x;
	printf("Введите значение угла в радианах (0 < a < 2pi) \n");
	scanf_s("%f", &a);
	if (a > 0 && a < 2*3.14) {
		x = (a*180)/3.1415;
		printf("Введенный угол в градусах примерно равен: %5.3f \n", x);
	}
	else printf("Введено невереное значение угла");

}