#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, i, j;
	printf("Введите числа A и B (A<B)\n");
	scanf_s("%d%d", &A, &B);
	for (A; A < B + 1; A++) {
		for (j = 1; j < A+1; j++)
			printf("%d  \n", A);
	}
	return 0;
}