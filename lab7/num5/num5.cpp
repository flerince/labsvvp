#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float A,B,x;
	printf("Введите значение коэффицентов A (не равное 0) и B для уравнения A*x+B=0 \n");
	scanf_s("%f%f", &A, &B);
	if (A != 0) {
		x = -B / A;
		printf("Х в уравнении = %5.3f \n", x);
	}
	else printf("Введено неверное значение A \n");
}