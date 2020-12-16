#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int c = 1, N, i, A, a = 1;
	printf("Введите число А и его максимальную степень N \n");
	scanf_s("%d%d", &A, &N);
	for (i = 1; i < N+1; i++) {
		c = c*A*(-1);
		a = a + c;
	}
	printf("Значение выражения 1-А+А^2-...+-A^N = %d \n", a);
	return 0;
}