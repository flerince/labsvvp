#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int c = 1, N, i,A, a=0;
	printf("Введите число А и его максимальную степень N \n");
	scanf_s("%d%d", &A,&N);
	for (i = 1; i < (pow(A,N)); i = i*A) {
		c = c + i;
		a = a + c;
	}
	printf("Значение суммы 1+А+А^2+...+A^N = %d \n", a);
	return 0;
}