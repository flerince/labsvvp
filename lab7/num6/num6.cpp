﻿#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Russian");
	float A1, A2, B1, B2, C1, C2, A, B, C, x;
	printf("Введите значение коэффицентов A1,A2,B1,B2,C1,C2 для системы уравнений: A1*x+B1*y=C1, A2*x+B2*y=C2 \n");
	scanf_s("%f%f%f%f%f%f", &A1, &A2, &B1, &B2, &C1, &C2);
	if ((A1 != 0) && (A2 != 0) && (B1 != 0) && (B2 != 0)) {
	A = A1 + A2;
	B = B1 + B2;
	C = C1 + C2;
	printf("Система уравнений является неоднородной и имеет бесконечное множество решение, x=(%5.2f -%5.2fy) /%5.2f , где y - любое действительное число\n", C, B, A);
   }
	if ((A1 == 0) && (A2 == 0) && (B1 != 0) && (B2 != 0)) {
		B = B1 + B2;
		C = C1 + C2;
		x = C / B;
		printf("х не существует, y = %5.2F \n", x);
	}
	if ((B1 == 0) && (B2 == 0) && (A1 != 0) && (A2 != 0)) {
		A = A1 + A2;
		C = C1 + C2;
		x = C / A;
		printf("y не существует, x = %5.2F \n", x);
	}
	if ((B1 == 0) && (B2 == 0) && (A1 == 0) && (A2 == 0))
		printf("Невозможно определить x и y \n");
}