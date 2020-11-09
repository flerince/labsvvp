#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A,B;
	printf("Введите длины отрезков А и В (A>B)\n");
	scanf_s("%d%d", &A, &B);
	if (A > B)
		printf("Отрезок B может поместиться в отрезок A следующее количество раз: %1.0f (без наложений)\n", trunc(A / B));
	else printf("Введеное значение A не соответствует условию");
	return 0;
}