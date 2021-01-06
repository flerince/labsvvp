#include <stdio.h>
#include <locale.h>
int Sign(float X)
{
	if (X < 0) return -1;
	if (X == 0) return 0;
	if (X > 0) return 1;
 }

int main() {
	setlocale(LC_ALL, "Russian");
	float A, B;
	printf("Введите число A и B \n");
		scanf_s("%f%f", &A, &B);
		A = Sign(A);
		B = Sign(B);
		printf("%f \n", A+B);
	return 0;
}