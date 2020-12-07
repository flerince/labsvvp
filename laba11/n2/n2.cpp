#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, C, max, min, x;
	printf("Введите значение А В C \n");
	scanf_s("%d%d%d", &A, &B, &C);
	if (A > B) {
		max = A;
		min = B;
	}
	else {max = B;
	min = A;
}
	if (max < C) x = max + C;
	else if (min < C) x = max + C;
	else x = max + min;
	printf("Сумма двух наибольших чисел = %d", x);
	return 0;
}
