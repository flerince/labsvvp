#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float A, vsp;
	printf("Введите значение A \n");
	scanf_s("%f", &A);
	vsp = A * A;
	vsp = vsp * vsp;
	vsp = vsp * vsp;
	printf("A в 8 степени = %f \n", vsp);
}