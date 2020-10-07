#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float A, vsp1, vsp2;
	printf("Введите значение A \n");
	scanf_s("%f", &A);
	vsp1 = A * A; // 2 степень
	vsp2 = vsp1 * vsp1; // 4 
	vsp2 = vsp2 * A; // 5
	vsp2 = vsp2 * vsp2 * vsp2;
	printf("A в 15 степени = %f \n", vsp2);
}