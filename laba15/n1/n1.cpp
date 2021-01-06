#include <stdio.h>
#include <locale.h>
float PowerA3(float A, float B)
{
	B = A*A*A;
	return B;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int i;
	float A, B=0;
	printf("Введите число A 5 раз \n");
	for (i = 1; i < 6; i++)
	{
		scanf_s("%f", &A);
		B = PowerA3(A, B);
		printf("%5.3f в третьей степени равняется %5.3f \n", A, B);
	}
	return 0;
}