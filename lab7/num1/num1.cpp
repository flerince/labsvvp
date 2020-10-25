#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float a, x;
	printf("Введите градусную меру угла (0 < a < 360) \n");
	scanf_s("%f", &a);
	if ( a>0 && a<360 ) {
		x =(a*3.14)/180;
		printf("Введенный угол равен следующему числу радиан: %5.3f \n", x);
	}
	else printf("Введено невереное значение угла");

}